#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"

struct line_symbol symbols[SYM_MAX_SYMBOLS];
int symbol_count = 0;

int compare_symbols(const void *a, const void *b) {
    const struct line_symbol *symbol1 = (const struct line_symbol *)a;
    const struct line_symbol *symbol2 = (const struct line_symbol *)b;

    if (symbol1->address < symbol2->address) return -1;
    else if (symbol1->address > symbol2->address) return 1;
    else return 0;
}

int sym_find_symbol_by_address(int address) {
    for (int i = 0; i < symbol_count; i++) {
        if (symbols[i].address == address) {
            return i; // Return index of the found symbol
        }
    }
    return -1; // Symbol not found
}

void sym_print_symbols() {
    printf("Loaded Symbols:\n");
    for (int i = 0; i < symbol_count; i++) {
        // Print the symbol address in hex format, zero-padded to 6 characters
        printf("At: %06lx, ", (long unsigned)symbols[i].address);

        // Print the symbol type with fixed width
        printf("%-10s", // Adjust the width as needed for alignment
            symbols[i].type == SYM_FUNCTION ? "Function" :
            symbols[i].type == SYM_OBJECT ? "Object" :
            symbols[i].type == SYM_MULTIPLE ? "Multiple" :
            "Undefined");

        // Print the symbol name
        printf("%s\n", symbols[i].name);
    }
}

int is_hex(const char *str) {
    while (*str) {
        if (!isxdigit((unsigned char) *str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

int is_whitespace_line(const char *line) {
    while (*line) {
        if (!isspace((unsigned char)*line)) {
            return 0; // Found a non-whitespace character
        }
        line++;
    }
    return 1; // The line is all whitespace
}

int parse_symbol_line(const char *line, struct line_symbol *symbol) {
    char hex_address[9]; // 8 chars for address + 1 for '\0'
    char type_name[3];   // 2 chars for type + 1 for '\0'
    char name[SYM_BUFFER_SIZE];

    if (is_whitespace_line(line)) return SYM_EMPTY;

    // Extract and validate hex address
    strncpy(hex_address, line, 8);
    hex_address[8] = '\0';
    if (!is_hex(hex_address)) {
        return SYM_RESULT_FAIL;
    }
    symbol->address = strtoul(hex_address, NULL, 16);

    // Extract and validate type name
    strncpy(type_name, line + 14, 2);
    type_name[2] = '\0';

    // Determine symbol type
    if (strcmp(type_name, " F") == 0) {
        symbol->type = SYM_FUNCTION;
    } else if (strcmp(type_name, " O") == 0) {
        symbol->type = SYM_OBJECT;
    } else {
        symbol->type = SYM_UNDEFINED;
    }

    // Extract symbol name
    const char *name_ptr = line + 17;
    int space_count = 0;
    while (*name_ptr && space_count < 2) {
        if (*name_ptr == ' ' || *name_ptr == '\t') space_count++;
        name_ptr++;
    }
    strncpy(name, name_ptr, SYM_BUFFER_SIZE - 1);
    name[strcspn(name, "\n")] = '\0'; // Remove newline at the end

    // Allocate memory for the name and copy it
    symbol->name = malloc(strlen(name) + 1);
    if (symbol->name == NULL) {
        return SYM_RESULT_FAIL;
    }
    strcpy(symbol->name, name);

    return SYM_RESULT_SUCCESS;
}

int sym_load_symbols(FILE *symbols_file) {
    char buffer[SYM_BUFFER_SIZE];
    int line_count = 0;

    while (fgets(buffer, SYM_BUFFER_SIZE, symbols_file)) {
        line_count++;
        
        if (line_count == 4) {
            if (strncmp(buffer, "SYMBOL TABLE:", 13) != 0) {
                return SYM_RESULT_FAIL;
            }
            continue;
        }

        if (line_count > 4) {
            struct line_symbol temp_symbol;
            int parse_result = parse_symbol_line(buffer, &temp_symbol);
            if (parse_result== SYM_RESULT_SUCCESS) {
                int existing_index = sym_find_symbol_by_address(temp_symbol.address);
                if (existing_index != -1) {
                    // Symbol with the same address exists, merge names
                    size_t new_name_length = strlen(symbols[existing_index].name) + strlen(temp_symbol.name) + 2;
                    char *new_name = malloc(new_name_length);
                    if (new_name == NULL) {
                        return SYM_RESULT_FAIL;
                    }
                    snprintf(new_name, new_name_length, "%s,%s", symbols[existing_index].name, temp_symbol.name);
                    free(symbols[existing_index].name);
                    symbols[existing_index].name = new_name;
                    symbols[existing_index].type = SYM_MULTIPLE;
                } else {
                    // New symbol, add to array
                    symbols[symbol_count] = temp_symbol;
                    symbol_count++;
                }
            } else if (parse_result== SYM_EMPTY){
                ; // continue
            }else {
                return SYM_RESULT_FAIL;
            }
        }
    }
    qsort(symbols, symbol_count, sizeof(struct line_symbol), compare_symbols);
    return symbol_count > 0 ? SYM_RESULT_SUCCESS : SYM_RESULT_FAIL;
}