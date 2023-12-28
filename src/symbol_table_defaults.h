#ifndef SYMBOL_TABLE_DATA_H
#define SYMBOL_TABLE_DATA_H

#include <stdint.h>
#include "symbol_table.h"

struct line_symbol sym_default_symbols[] = {

// VERA addresses
    {0x9F20, 1, "VERA_ADDRx_L"},
    {0x9F21, 1, "VERA_ADDRx_M"},
    {0x9F22, 1, "VERA_ADDRx_H"},
    {0x9F23, 1, "VERA_DATA0"},
    {0x9F24, 1, "VERA_DATA1"},
    {0x9F25, 1, "VERA_CTRL"},
    {0x9F26, 1, "VERA_IEN"},
    {0x9F27, 1, "VERA_ISR"},
    {0x9F28, 1, "VERA_IRQLINE_L"},
    {0x9F28, 1, "VERA_SCANLINE_L"},
    {0x9F29, 1, "VERA_DC_VIDEO"},
    //
    {0x9F2A, 1, "VERA_DC_HSCALE"},
    {0x9F2B, 1, "VERA_DC_VSCALE"},
    {0x9F2C, 1, "VERA_DC_BORDER"},
    {0x9F29, 1, "VERA_DC_HSTART"},
    {0x9F2A, 1, "VERA_DC_HSTOP"},
    {0x9F2B, 1, "VERA_DC_VSTART"},
    {0x9F2C, 1, "VERA_DC_VSTOP"},
    {0x9F29, 1, "VERA_FX_CTRL"},
    // fx variations
    // {0x9F2A, 1, "VERA_FX_TILEBASE"},
    // {0x9F2B, 1, "VERA_FX_MAPBASE"},
    // {0x9F2C, 1, "VERA_FX_MULT"},
    // {0x9F29, 1, "VERA_FX_X_INCR_L"},
    // {0x9F2A, 1, "VERA_FX_X_INCR_H"},
    // {0x9F2B, 1, "VERA_FX_Y_INCR_L"},
    // {0x9F2C, 1, "VERA_FX_Y_INCR_H"},
    // {0x9F29, 1, "VERA_FX_X_POS_L"},
    // //
    // {0x9F2A, 1, "VERA_FX_X_POS_H"},
    // {0x9F2B, 1, "VERA_FX_Y_POS_L"},
    // {0x9F2C, 1, "VERA_FX_Y_POS_H"},
    // {0x9F29, 1, "VERA_FX_X_POS_S"},
    // {0x9F2A, 1, "VERA_FX_Y_POS_S"},
    // {0x9F2B, 1, "VERA_FX_POLY_FILL_L"},
    // {0x9F2B, 1, "VERA_FX_POLY_FILL_L"},
    // {0x9F2B, 1, "VERA_FX_POLY_FILL_L"},
    // {0x9F2C, 1, "VERA_FX_POLY_FILL_H"},
    // {0x9F29, 1, "VERA_FX_CACHE_L"},
    // {0x9F29, 1, "VERA_FX_ACCUM_RESET"},
    // //
    // {0x9F2A, 1, "VERA_FX_CACHE_M"},
    // {0x9F2A, 1, "VERA_FX_ACCUM"},
    // {0x9F2B, 1, "VERA_FX_CACHE_H"},
    // {0x9F2C, 1, "VERA_FX_CACHE_U"},
    // // dcsel 63
    // {0x9F29, 1, "VERA_DC_VER0"},
    // {0x9F2A, 1, "VERA_DC_VER1"},
    // {0x9F2B, 1, "VERA_DC_VER2"},
    // {0x9F2C, 1, "VERA_DC_VER3"},
    // //
    {0x9F2D, 1, "VERA_L0_CONFIG"},
    {0x9F2E, 1, "VERA_L0_MAPBASE"},
    {0x9F2F, 1, "VERA_L0_TILEBASE"},
    {0x9F30, 1, "VERA_L0_HSCROLL_L"},
    {0x9F31, 1, "VERA_L0_HSCROLL_H"},
    {0x9F32, 1, "VERA_L0_VSCROLL_L"},
    {0x9F33, 1, "VERA_L0_VSCROLL_H"},
    {0x9F34, 1, "VERA_L1_CONFIG"},
    {0x9F35, 1, "VERA_L1_MAPBASE"},
    {0x9F36, 1, "VERA_L1_TILEBASE"},
    {0x9F37, 1, "VERA_L1_HSCROLL_L"},
    {0x9F38, 1, "VERA_L1_HSCROLL_H"},
    {0x9F39, 1, "VERA_L1_VSCROLL_L"},
    {0x9F3A, 1, "VERA_L1_VSCROLL_H"},
    {0x9F3B, 1, "VERA_AUDIO_CTRL"},
    {0x9F3C, 1, "VERA_AUDIO_RATE"},
    {0x9F3D, 1, "VERA_AUDIO_DATA"},
    {0x9F3E, 1, "VERA_SPI_DATA"},
    {0x9F3F, 1, "VERA_SPI_CTRL"},

// VIA 1
    {0x9F00, 1, "VIA1_PA0"},
    {0x9F01, 1, "VIA1_PA1"},
    {0x9F02, 1, "VIA1_PA2"},
    {0x9F03, 1, "VIA1_PA3"},
    {0x9F04, 1, "VIA1_PA4_NESDAT3"},
    {0x9F05, 1, "VIA1_PA5_NESDAT2"},
    {0x9F06, 1, "VIA1_PA6_NESDAT1"},
    {0x9F07, 1, "VIA1_PA7_NESDAT0"},
    {0x9F08, 1, "VIA1_PB0"},
    {0x9F09, 1, "VIA1_PB1"},
    {0x9F0A, 1, "VIA1_PB2"},
    {0x9F0B, 1, "VIA1_PB3"},
    {0x9F0C, 1, "VIA1_PB4"},
    {0x9F0D, 1, "VIA1_PB5"},
    {0x9F0E, 1, "VIA1_PB6"},
    {0x9F0F, 1, "VIA1_PB7"},

// KERNAL API functions
    {0xFFA5, 1, "K_ACPTR"},
    {0xFFCF, 1, "K_BASIN"},
    {0xFEBA, 1, "K_BSAVE"},
    {0xFFD2, 1, "K_BSOUT"},
    {0xFFA8, 1, "K_CIOUT"},
    {0xFFE7, 1, "K_CLALL"},
    {0xFFC3, 1, "K_CLOSE"},
    {0xFFC6, 1, "K_CHKIN"},
    {0xFF50, 1, "K_clock_get_date_time"},
    {0xFF4D, 1, "K_clock_set_date_time"},
    {0xFFCF, 1, "K_CHRIN"},
    {0xFFD2, 1, "K_CHROUT"},
    {0xFF4A, 1, "K_CLOSE_ALL"},
    {0xFFCC, 1, "K_CLRCHN"},
    {0xFEDB, 1, "K_console_init"},
    {0xFEE1, 1, "K_console_get_char"},
    {0xFEDE, 1, "K_console_put_char"},
    {0xFED8, 1, "K_console_put_image"},
    {0xFF47, 1, "K_enter_basic"},
    {0xFECF, 1, "K_entropy_get"},
    {0xFF74, 1, "K_fetch"},
    {0xFF02, 1, "K_FB_cursor_next_line"},
    {0xFEFF, 1, "K_FB_cursor_position"},
    {0xFF17, 1, "K_FB_fill_pixels"},
    {0xFF1A, 1, "K_FB_filter_pixels"},
    {0xFEF9, 1, "K_FB_get_info"},
    {0xFF05, 1, "K_FB_get_pixel"},
    {0xFF08, 1, "K_FB_get_pixels"},
    {0xFEF6, 1, "K_FB_init"},
    {0xFF1D, 1, "K_FB_move_pixels"},
    {0xFF11, 1, "K_FB_set_8_pixels"},
    {0xFF14, 1, "K_FB_set_8_pixels_opaque"},
    {0xFEFC, 1, "K_FB_set_palette"},
    {0xFF0B, 1, "K_FB_set_pixel"},
    {0xFF0E, 1, "K_FB_set_pixels"},
    {0xFFE4, 1, "K_GETIN"},
    {0xFF23, 1, "K_GRAPH_clear"},
    {0xFF38, 1, "K_GRAPH_draw_image"},
    {0xFF2C, 1, "K_GRAPH_draw_line"},
    {0xFF35, 1, "K_GRAPH_draw_oval"},
    {0xFF2F, 1, "K_GRAPH_draw_rect"},
    {0xFF3E, 1, "K_GRAPH_get_char_size"},
    {0xFF20, 1, "K_GRAPH_init"},
    {0xFF32, 1, "K_GRAPH_move_rect"},
    {0xFF41, 1, "K_GRAPH_put_char"},
    {0xFF29, 1, "K_GRAPH_set_colors"},
    {0xFF3B, 1, "K_GRAPH_set_font"},
    {0xFF26, 1, "K_GRAPH_set_window"},
    {0xFEB4, 1, "K_i2c_batch_read"},
    {0xFEB7, 1, "K_i2c_batch_write"},
    {0xFEC6, 1, "K_i2c_read_byte"},
    {0xFEC9, 1, "K_i2c_write_byte"},
    {0xFFF3, 1, "K_IOBASE"},
    {0xFF6E, 1, "K_JSRFAR"},
    {0xFF56, 1, "K_joystick_get"},
    {0xFF53, 1, "K_joystick_scan"},
    {0xFEC0, 1, "K_kbdbuf_get_modifiers"},
    {0xFEBD, 1, "K_kbdbuf_peek"},
    {0xFEC3, 1, "K_kbdbuf_put"},
    {0xFED2, 1, "K_keymap"},
    {0xFFB1, 1, "K_LISTEN"},
    {0xFF59, 1, "K_LKUPLA"},
    {0xFF5C, 1, "K_LKUPSA"},
    {0xFFD5, 1, "K_LOAD"},
    {0xFF44, 1, "K_MACPTR"},
    {0xFEB1, 1, "K_MCIOUT"},
    {0xFF9C, 1, "K_MEMBOT"},
    {0xFEE7, 1, "K_memory_copy"},
    {0xFEEA, 1, "K_memory_crc"},
    {0xFEED, 1, "K_memory_decompress"},
    {0xFEE4, 1, "K_memory_fill"},
    {0xFF99, 1, "K_MEMTOP"},
    {0xFECC, 1, "K_monitor"},
    {0xFF68, 1, "K_mouse_config"},
    {0xFF6B, 1, "K_mouse_get"},
    {0xFF71, 1, "K_mouse_scan"},
    {0xFFC0, 1, "K_OPEN"},
    {0xFFF0, 1, "K_PLOT"},
    {0xFF7D, 1, "K_PRIMM"},
    {0xFFDE, 1, "K_RDTIM"},
    {0xFFB7, 1, "K_READST"},
    {0xFFD8, 1, "K_SAVE"},
    {0xFF9F, 1, "K_SCNKEY"},
    {0xFFED, 1, "K_SCREEN"},
    {0xFF5F, 1, "K_screen_mode"},
    {0xFF62, 1, "K_screen_set_charset"},
    {0xFF93, 1, "K_SECOND"},
    {0xFFBA, 1, "K_SETLFS"},
    {0xFF90, 1, "K_SETMSG"},
    {0xFFBD, 1, "K_SETNAM"},
    {0xFFDB, 1, "K_SETTIM"},
    {0xFFA2, 1, "K_SETTMO"},
    {0xFEf0, 1, "K_sprite_set_image"},
    {0xFEf3, 1, "K_sprite_set_position"},
    {0xFF77, 1, "K_stash"},
    {0xFFE1, 1, "K_STOP"},
    {0xFFB4, 1, "K_TALK"},
    {0xFF96, 1, "K_TKSA"},
    {0xFFEA, 1, "K_UDTIM"},
    {0xFFAE, 1, "K_UNLSN"},
    {0xFFAB, 1, "K_UNTLK"},
// KERNAL vectors
    {0x0314, 1, "KV_CINV"},
    {0x0316, 1, "KV_CBINV"},
    {0x0318, 1, "KV_NMINV"},
    {0x031A, 1, "KV_IOPEN"},
    {0x031C, 1, "KV_ICLOSE"},
    {0x031E, 1, "KV_ICHKIN"},
    {0x0320, 1, "KV_ICKOUT"},
    {0x0322, 1, "KV_ICLRCH"},
    {0x0324, 1, "KV_IBASIN"},
    {0x0326, 1, "KV_IBSOUT"},
    {0x0328, 1, "KV_ISTOP"},
    {0x032A, 1, "KV_IGETIN"},
    {0x032C, 1, "KV_ICLALL"},
    {0x0330, 1, "KV_ILOAD"},
    {0x0332, 1, "KV_ISAVE"},

// emulator
    {0x9FB0, 1, "DBG_FLAG"},
    {0x9FB1, 1, "DBG_VID"},
    {0x9FB2, 1, "DBG_KBD"},
    {0x9FB3, 1, "DBG_ECHO"},
    {0x9FB4, 1, "DBG_SAVE"},
    {0x9FB5, 1, "DBG_GIF"},
    {0x9FB6, 1, "DBG_WAV"},
    {0x9FB7, 1, "DBG_CMD"},
    {0x9FB8, 1, "DBG_CLK0"},
    {0x9FB9, 1, "DBG_CLK1"},
    {0x9FBA, 1, "DBG_CLK2"},
    {0x9FBB, 1, "DBG_CLK3"},
    // {0x9FBC, 1, "DBG_NONE"},
    {0x9FBD, 1, "DBG_KEYMP"},
    {0x9FBE, 1, "DBG_EMU1"},
    {0x9FBF, 1, "DBG_EMU2"},
};

#endif