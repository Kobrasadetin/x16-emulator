// *******************************************************************************************
// *******************************************************************************************
//
//		File:		symbol_table.h
//		Date:		27th December 2023
//		Purpose:	Importing symbols
//		Author:		Mikko Karjanmaa (mikko.karjanmaa@gmail.com)
//
// *******************************************************************************************
// *******************************************************************************************
#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define SYM_RESULT_SUCCESS (0)
#define SYM_RESULT_FAIL (-1)
#define SYM_EMPTY (1)

#define SYM_UNDEFINED (1)
#define SYM_FUNCTION (2)
#define SYM_OBJECT (3)
#define SYM_MULTIPLE (4)

#define SYM_BUFFER_SIZE (256)
#define SYM_MAX_SYMBOLS (2048)


struct line_symbol {
    int address;
    char type;
    char *name;
};

extern int symbol_count;

struct line_symbol *sym_find_symbol_by_address(int address);
struct line_symbol *sym_find_by_address_in_range(int address, int range);
void sym_print_symbols();
int sym_load_symbols(FILE *symbols_file);

#endif