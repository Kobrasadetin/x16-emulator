/* Generated by buildtables.py */

static const char *mnemonics_c02[256] = {
	// $0X
	/* $00 */ "brk #$%02x",
	/* $01 */ "ora ($%02x,x)",
	/* $02 */ "nop #$%02x",
	/* $03 */ "nop ",
	/* $04 */ "tsb $%02x",
	/* $05 */ "ora $%02x",
	/* $06 */ "asl $%02x",
	/* $07 */ "rmb0 $%02x",
	/* $08 */ "php ",
	/* $09 */ "ora #$%%0%hhux",
	/* $0A */ "asl a",
	/* $0B */ "nop ",
	/* $0C */ "tsb $%04x",
	/* $0D */ "ora $%04x",
	/* $0E */ "asl $%04x",
	/* $0F */ "bbr0 $%02x, $%04x",

	// $1X
	/* $10 */ "bpl $%02x",
	/* $11 */ "ora ($%02x),y",
	/* $12 */ "ora ($%02x)",
	/* $13 */ "nop ",
	/* $14 */ "trb $%02x",
	/* $15 */ "ora $%02x,x",
	/* $16 */ "asl $%02x,x",
	/* $17 */ "rmb1 $%02x",
	/* $18 */ "clc ",
	/* $19 */ "ora $%04x,y",
	/* $1A */ "inc a",
	/* $1B */ "nop ",
	/* $1C */ "trb $%04x",
	/* $1D */ "ora $%04x,x",
	/* $1E */ "asl $%04x,x",
	/* $1F */ "bbr1 $%02x, $%04x",

	// $2X
	/* $20 */ "jsr $%04x",
	/* $21 */ "and ($%02x,x)",
	/* $22 */ "nop #$%02x",
	/* $23 */ "nop ",
	/* $24 */ "bit $%02x",
	/* $25 */ "and $%02x",
	/* $26 */ "rol $%02x",
	/* $27 */ "rmb2 $%02x",
	/* $28 */ "plp ",
	/* $29 */ "and #$%%0%hhux",
	/* $2A */ "rol a",
	/* $2B */ "nop ",
	/* $2C */ "bit $%04x",
	/* $2D */ "and $%04x",
	/* $2E */ "rol $%04x",
	/* $2F */ "bbr2 $%02x, $%04x",

	// $3X
	/* $30 */ "bmi $%02x",
	/* $31 */ "and ($%02x),y",
	/* $32 */ "and ($%02x)",
	/* $33 */ "nop ",
	/* $34 */ "bit $%02x,x",
	/* $35 */ "and $%02x,x",
	/* $36 */ "rol $%02x,x",
	/* $37 */ "rmb3 $%02x",
	/* $38 */ "sec ",
	/* $39 */ "and $%04x,y",
	/* $3A */ "dec a",
	/* $3B */ "nop ",
	/* $3C */ "bit $%04x,x",
	/* $3D */ "and $%04x,x",
	/* $3E */ "rol $%04x,x",
	/* $3F */ "bbr3 $%02x, $%04x",

	// $4X
	/* $40 */ "rti ",
	/* $41 */ "eor ($%02x,x)",
	/* $42 */ "nop #$%02x",
	/* $43 */ "nop ",
	/* $44 */ "nop #$%02x",
	/* $45 */ "eor $%02x",
	/* $46 */ "lsr $%02x",
	/* $47 */ "rmb4 $%02x",
	/* $48 */ "pha ",
	/* $49 */ "eor #$%%0%hhux",
	/* $4A */ "lsr a",
	/* $4B */ "nop ",
	/* $4C */ "jmp $%04x",
	/* $4D */ "eor $%04x",
	/* $4E */ "lsr $%04x",
	/* $4F */ "bbr4 $%02x, $%04x",

	// $5X
	/* $50 */ "bvc $%02x",
	/* $51 */ "eor ($%02x),y",
	/* $52 */ "eor ($%02x)",
	/* $53 */ "nop ",
	/* $54 */ "nop #$%02x",
	/* $55 */ "eor $%02x,x",
	/* $56 */ "lsr $%02x,x",
	/* $57 */ "rmb5 $%02x",
	/* $58 */ "cli ",
	/* $59 */ "eor $%04x,y",
	/* $5A */ "phy ",
	/* $5B */ "nop ",
	/* $5C */ "nop ",
	/* $5D */ "eor $%04x,x",
	/* $5E */ "lsr $%04x,x",
	/* $5F */ "bbr5 $%02x, $%04x",

	// $6X
	/* $60 */ "rts ",
	/* $61 */ "adc ($%02x,x)",
	/* $62 */ "nop #$%02x",
	/* $63 */ "nop ",
	/* $64 */ "stz $%02x",
	/* $65 */ "adc $%02x",
	/* $66 */ "ror $%02x",
	/* $67 */ "rmb6 $%02x",
	/* $68 */ "pla ",
	/* $69 */ "adc #$%%0%hhux",
	/* $6A */ "ror a",
	/* $6B */ "nop ",
	/* $6C */ "jmp ($%04x)",
	/* $6D */ "adc $%04x",
	/* $6E */ "ror $%04x",
	/* $6F */ "bbr6 $%02x, $%04x",

	// $7X
	/* $70 */ "bvs $%02x",
	/* $71 */ "adc ($%02x),y",
	/* $72 */ "adc ($%02x)",
	/* $73 */ "nop ",
	/* $74 */ "stz $%02x,x",
	/* $75 */ "adc $%02x,x",
	/* $76 */ "ror $%02x,x",
	/* $77 */ "rmb7 $%02x",
	/* $78 */ "sei ",
	/* $79 */ "adc $%04x,y",
	/* $7A */ "ply ",
	/* $7B */ "nop ",
	/* $7C */ "jmp ($%04x,x)",
	/* $7D */ "adc $%04x,x",
	/* $7E */ "ror $%04x,x",
	/* $7F */ "bbr7 $%02x, $%04x",

	// $8X
	/* $80 */ "bra $%02x",
	/* $81 */ "sta ($%02x,x)",
	/* $82 */ "nop #$%02x",
	/* $83 */ "nop ",
	/* $84 */ "sty $%02x",
	/* $85 */ "sta $%02x",
	/* $86 */ "stx $%02x",
	/* $87 */ "smb0 $%02x",
	/* $88 */ "dey ",
	/* $89 */ "bit #$%%0%hhux",
	/* $8A */ "txa ",
	/* $8B */ "nop ",
	/* $8C */ "sty $%04x",
	/* $8D */ "sta $%04x",
	/* $8E */ "stx $%04x",
	/* $8F */ "bbs0 $%02x, $%04x",

	// $9X
	/* $90 */ "bcc $%02x",
	/* $91 */ "sta ($%02x),y",
	/* $92 */ "sta ($%02x)",
	/* $93 */ "nop ",
	/* $94 */ "sty $%02x,x",
	/* $95 */ "sta $%02x,x",
	/* $96 */ "stx $%02x,y",
	/* $97 */ "smb1 $%02x",
	/* $98 */ "tya ",
	/* $99 */ "sta $%04x,y",
	/* $9A */ "txs ",
	/* $9B */ "nop ",
	/* $9C */ "stz $%04x",
	/* $9D */ "sta $%04x,x",
	/* $9E */ "stz $%04x,x",
	/* $9F */ "bbs1 $%02x, $%04x",

	// $AX
	/* $A0 */ "ldy #$%%0%hhux",
	/* $A1 */ "lda ($%02x,x)",
	/* $A2 */ "ldx #$%%0%hhux",
	/* $A3 */ "nop ",
	/* $A4 */ "ldy $%02x",
	/* $A5 */ "lda $%02x",
	/* $A6 */ "ldx $%02x",
	/* $A7 */ "smb2 $%02x",
	/* $A8 */ "tay ",
	/* $A9 */ "lda #$%%0%hhux",
	/* $AA */ "tax ",
	/* $AB */ "nop ",
	/* $AC */ "ldy $%04x",
	/* $AD */ "lda $%04x",
	/* $AE */ "ldx $%04x",
	/* $AF */ "bbs2 $%02x, $%04x",

	// $BX
	/* $B0 */ "bcs $%02x",
	/* $B1 */ "lda ($%02x),y",
	/* $B2 */ "lda ($%02x)",
	/* $B3 */ "nop ",
	/* $B4 */ "ldy $%02x,x",
	/* $B5 */ "lda $%02x,x",
	/* $B6 */ "ldx $%02x,y",
	/* $B7 */ "smb3 $%02x",
	/* $B8 */ "clv ",
	/* $B9 */ "lda $%04x,y",
	/* $BA */ "tsx ",
	/* $BB */ "nop ",
	/* $BC */ "ldy $%04x,x",
	/* $BD */ "lda $%04x,x",
	/* $BE */ "ldx $%04x,y",
	/* $BF */ "bbs3 $%02x, $%04x",

	// $CX
	/* $C0 */ "cpy #$%%0%hhux",
	/* $C1 */ "cmp ($%02x,x)",
	/* $C2 */ "nop #$%02x",
	/* $C3 */ "nop ",
	/* $C4 */ "cpy $%02x",
	/* $C5 */ "cmp $%02x",
	/* $C6 */ "dec $%02x",
	/* $C7 */ "smb4 $%02x",
	/* $C8 */ "iny ",
	/* $C9 */ "cmp #$%%0%hhux",
	/* $CA */ "dex ",
	/* $CB */ "wai ",
	/* $CC */ "cpy $%04x",
	/* $CD */ "cmp $%04x",
	/* $CE */ "dec $%04x",
	/* $CF */ "bbs4 $%02x, $%04x",

	// $DX
	/* $D0 */ "bne $%02x",
	/* $D1 */ "cmp ($%02x),y",
	/* $D2 */ "cmp ($%02x)",
	/* $D3 */ "nop ",
	/* $D4 */ "nop #$%02x",
	/* $D5 */ "cmp $%02x,x",
	/* $D6 */ "dec $%02x,x",
	/* $D7 */ "smb5 $%02x",
	/* $D8 */ "cld ",
	/* $D9 */ "cmp $%04x,y",
	/* $DA */ "phx ",
	/* $DB */ "stp ",
	/* $DC */ "nop ",
	/* $DD */ "cmp $%04x,x",
	/* $DE */ "dec $%04x,x",
	/* $DF */ "bbs5 $%02x, $%04x",

	// $EX
	/* $E0 */ "cpx #$%%0%hhux",
	/* $E1 */ "sbc ($%02x,x)",
	/* $E2 */ "nop #$%02x",
	/* $E3 */ "nop ",
	/* $E4 */ "cpx $%02x",
	/* $E5 */ "sbc $%02x",
	/* $E6 */ "inc $%02x",
	/* $E7 */ "smb6 $%02x",
	/* $E8 */ "inx ",
	/* $E9 */ "sbc #$%%0%hhux",
	/* $EA */ "nop ",
	/* $EB */ "nop ",
	/* $EC */ "cpx $%04x",
	/* $ED */ "sbc $%04x",
	/* $EE */ "inc $%04x",
	/* $EF */ "bbs6 $%02x, $%04x",

	// $FX
	/* $F0 */ "beq $%02x",
	/* $F1 */ "sbc ($%02x),y",
	/* $F2 */ "sbc ($%02x)",
	/* $F3 */ "nop ",
	/* $F4 */ "nop #$%02x",
	/* $F5 */ "sbc $%02x,x",
	/* $F6 */ "inc $%02x,x",
	/* $F7 */ "smb7 $%02x",
	/* $F8 */ "sed ",
	/* $F9 */ "sbc $%04x,y",
	/* $FA */ "plx ",
	/* $FB */ "nop ",
	/* $FC */ "nop ",
	/* $FD */ "sbc $%04x,x",
	/* $FE */ "inc $%04x,x",
	/* $FF */ "bbs7 $%02x, $%04x"};

static const char *mnemonics_c816[256] = {
	// $0X
	/* $00 */ "brk #$%02x",
	/* $01 */ "ora ($%02x,x)",
	/* $02 */ "cop #$%02x",
	/* $03 */ "ora $%02x,S",
	/* $04 */ "tsb $%02x",
	/* $05 */ "ora $%02x",
	/* $06 */ "asl $%02x",
	/* $07 */ "ora [$%02x]",
	/* $08 */ "php ",
	/* $09 */ "ora #$%%0%hhux",
	/* $0A */ "asl a",
	/* $0B */ "phd ",
	/* $0C */ "tsb $%04x",
	/* $0D */ "ora $%04x",
	/* $0E */ "asl $%04x",
	/* $0F */ "ora $%06x",

	// $1X
	/* $10 */ "bpl $%02x",
	/* $11 */ "ora ($%02x),y",
	/* $12 */ "ora ($%02x)",
	/* $13 */ "ora ($%02x,S),y",
	/* $14 */ "trb $%02x",
	/* $15 */ "ora $%02x,x",
	/* $16 */ "asl $%02x,x",
	/* $17 */ "ora [$%02x],y",
	/* $18 */ "clc ",
	/* $19 */ "ora $%04x,y",
	/* $1A */ "inc a",
	/* $1B */ "tcs ",
	/* $1C */ "trb $%04x",
	/* $1D */ "ora $%04x,x",
	/* $1E */ "asl $%04x,x",
	/* $1F */ "ora $%06x,x",

	// $2X
	/* $20 */ "jsr $%04x",
	/* $21 */ "and ($%02x,x)",
	/* $22 */ "jsl $%06x",
	/* $23 */ "and $%02x,S",
	/* $24 */ "bit $%02x",
	/* $25 */ "and $%02x",
	/* $26 */ "rol $%02x",
	/* $27 */ "and [$%02x]",
	/* $28 */ "plp ",
	/* $29 */ "and #$%%0%hhux",
	/* $2A */ "rol a",
	/* $2B */ "pld ",
	/* $2C */ "bit $%04x",
	/* $2D */ "and $%04x",
	/* $2E */ "rol $%04x",
	/* $2F */ "and $%06x",

	// $3X
	/* $30 */ "bmi $%02x",
	/* $31 */ "and ($%02x),y",
	/* $32 */ "and ($%02x)",
	/* $33 */ "and ($%02x,S),y",
	/* $34 */ "bit $%02x,x",
	/* $35 */ "and $%02x,x",
	/* $36 */ "rol $%02x,x",
	/* $37 */ "and [$%02x],y",
	/* $38 */ "sec ",
	/* $39 */ "and $%04x,y",
	/* $3A */ "dec a",
	/* $3B */ "tsc ",
	/* $3C */ "bit $%04x,x",
	/* $3D */ "and $%04x,x",
	/* $3E */ "rol $%04x,x",
	/* $3F */ "and $%06x,x",

	// $4X
	/* $40 */ "rti ",
	/* $41 */ "eor ($%02x,x)",
	/* $42 */ "wdm #$%02x",
	/* $43 */ "eor $%02x,S",
	/* $44 */ "mvp $%02x,$%02x",
	/* $45 */ "eor $%02x",
	/* $46 */ "lsr $%02x",
	/* $47 */ "eor [$%02x]",
	/* $48 */ "pha ",
	/* $49 */ "eor #$%%0%hhux",
	/* $4A */ "lsr a",
	/* $4B */ "phk ",
	/* $4C */ "jmp $%04x",
	/* $4D */ "eor $%04x",
	/* $4E */ "lsr $%04x",
	/* $4F */ "eor $%06x",

	// $5X
	/* $50 */ "bvc $%02x",
	/* $51 */ "eor ($%02x),y",
	/* $52 */ "eor ($%02x)",
	/* $53 */ "eor ($%02x,S),y",
	/* $54 */ "mvn $%02x,$%02x",
	/* $55 */ "eor $%02x,x",
	/* $56 */ "lsr $%02x,x",
	/* $57 */ "eor [$%02x],y",
	/* $58 */ "cli ",
	/* $59 */ "eor $%04x,y",
	/* $5A */ "phy ",
	/* $5B */ "tcd ",
	/* $5C */ "jml $%06x",
	/* $5D */ "eor $%04x,x",
	/* $5E */ "lsr $%04x,x",
	/* $5F */ "eor $%06x,x",

	// $6X
	/* $60 */ "rts ",
	/* $61 */ "adc ($%02x,x)",
	/* $62 */ "per $%04x",
	/* $63 */ "adc $%02x,S",
	/* $64 */ "stz $%02x",
	/* $65 */ "adc $%02x",
	/* $66 */ "ror $%02x",
	/* $67 */ "adc [$%02x]",
	/* $68 */ "pla ",
	/* $69 */ "adc #$%%0%hhux",
	/* $6A */ "ror a",
	/* $6B */ "rtl ",
	/* $6C */ "jmp ($%04x)",
	/* $6D */ "adc $%04x",
	/* $6E */ "ror $%04x",
	/* $6F */ "adc $%06x",

	// $7X
	/* $70 */ "bvs $%02x",
	/* $71 */ "adc ($%02x),y",
	/* $72 */ "adc ($%02x)",
	/* $73 */ "adc ($%02x,S),y",
	/* $74 */ "stz $%02x,x",
	/* $75 */ "adc $%02x,x",
	/* $76 */ "ror $%02x,x",
	/* $77 */ "adc [$%02x],y",
	/* $78 */ "sei ",
	/* $79 */ "adc $%04x,y",
	/* $7A */ "ply ",
	/* $7B */ "tdc ",
	/* $7C */ "jmp ($%04x,x)",
	/* $7D */ "adc $%04x,x",
	/* $7E */ "ror $%04x,x",
	/* $7F */ "adc $%06x,x",

	// $8X
	/* $80 */ "bra $%02x",
	/* $81 */ "sta ($%02x,x)",
	/* $82 */ "brl $%04x",
	/* $83 */ "sta $%02x,S",
	/* $84 */ "sty $%02x",
	/* $85 */ "sta $%02x",
	/* $86 */ "stx $%02x",
	/* $87 */ "sta [$%02x]",
	/* $88 */ "dey ",
	/* $89 */ "bit #$%%0%hhux",
	/* $8A */ "txa ",
	/* $8B */ "phb ",
	/* $8C */ "sty $%04x",
	/* $8D */ "sta $%04x",
	/* $8E */ "stx $%04x",
	/* $8F */ "sta $%06x",

	// $9X
	/* $90 */ "bcc $%02x",
	/* $91 */ "sta ($%02x),y",
	/* $92 */ "sta ($%02x)",
	/* $93 */ "sta ($%02x,S),y",
	/* $94 */ "sty $%02x,x",
	/* $95 */ "sta $%02x,x",
	/* $96 */ "stx $%02x,y",
	/* $97 */ "sta [$%02x],y",
	/* $98 */ "tya ",
	/* $99 */ "sta $%04x,y",
	/* $9A */ "txs ",
	/* $9B */ "txy ",
	/* $9C */ "stz $%04x",
	/* $9D */ "sta $%04x,x",
	/* $9E */ "stz $%04x,x",
	/* $9F */ "sta $%06x,x",

	// $AX
	/* $A0 */ "ldy #$%%0%hhux",
	/* $A1 */ "lda ($%02x,x)",
	/* $A2 */ "ldx #$%%0%hhux",
	/* $A3 */ "lda $%02x,S",
	/* $A4 */ "ldy $%02x",
	/* $A5 */ "lda $%02x",
	/* $A6 */ "ldx $%02x",
	/* $A7 */ "lda [$%02x]",
	/* $A8 */ "tay ",
	/* $A9 */ "lda #$%%0%hhux",
	/* $AA */ "tax ",
	/* $AB */ "plb ",
	/* $AC */ "ldy $%04x",
	/* $AD */ "lda $%04x",
	/* $AE */ "ldx $%04x",
	/* $AF */ "lda $%06x",

	// $BX
	/* $B0 */ "bcs $%02x",
	/* $B1 */ "lda ($%02x),y",
	/* $B2 */ "lda ($%02x)",
	/* $B3 */ "lda ($%02x,S),y",
	/* $B4 */ "ldy $%02x,x",
	/* $B5 */ "lda $%02x,x",
	/* $B6 */ "ldx $%02x,y",
	/* $B7 */ "lda [$%02x],y",
	/* $B8 */ "clv ",
	/* $B9 */ "lda $%04x,y",
	/* $BA */ "tsx ",
	/* $BB */ "tyx ",
	/* $BC */ "ldy $%04x,x",
	/* $BD */ "lda $%04x,x",
	/* $BE */ "ldx $%04x,y",
	/* $BF */ "lda $%06x,x",

	// $CX
	/* $C0 */ "cpy #$%%0%hhux",
	/* $C1 */ "cmp ($%02x,x)",
	/* $C2 */ "rep #$%02x",
	/* $C3 */ "cmp $%02x,S",
	/* $C4 */ "cpy $%02x",
	/* $C5 */ "cmp $%02x",
	/* $C6 */ "dec $%02x",
	/* $C7 */ "cmp [$%02x]",
	/* $C8 */ "iny ",
	/* $C9 */ "cmp #$%%0%hhux",
	/* $CA */ "dex ",
	/* $CB */ "wai ",
	/* $CC */ "cpy $%04x",
	/* $CD */ "cmp $%04x",
	/* $CE */ "dec $%04x",
	/* $CF */ "cmp $%06x",

	// $DX
	/* $D0 */ "bne $%02x",
	/* $D1 */ "cmp ($%02x),y",
	/* $D2 */ "cmp ($%02x)",
	/* $D3 */ "cmp ($%02x,S),y",
	/* $D4 */ "pei ($%02x)",
	/* $D5 */ "cmp $%02x,x",
	/* $D6 */ "dec $%02x,x",
	/* $D7 */ "cmp [$%02x],y",
	/* $D8 */ "cld ",
	/* $D9 */ "cmp $%04x,y",
	/* $DA */ "phx ",
	/* $DB */ "dbg ",
	/* $DC */ "jml [$%04x]",
	/* $DD */ "cmp $%04x,x",
	/* $DE */ "dec $%04x,x",
	/* $DF */ "cmp $%06x,x",

	// $EX
	/* $E0 */ "cpx #$%%0%hhux",
	/* $E1 */ "sbc ($%02x,x)",
	/* $E2 */ "sep #$%02x",
	/* $E3 */ "sbc $%02x,S",
	/* $E4 */ "cpx $%02x",
	/* $E5 */ "sbc $%02x",
	/* $E6 */ "inc $%02x",
	/* $E7 */ "sbc [$%02x]",
	/* $E8 */ "inx ",
	/* $E9 */ "sbc #$%%0%hhux",
	/* $EA */ "nop ",
	/* $EB */ "xba ",
	/* $EC */ "cpx $%04x",
	/* $ED */ "sbc $%04x",
	/* $EE */ "inc $%04x",
	/* $EF */ "sbc $%06x",

	// $FX
	/* $F0 */ "beq $%02x",
	/* $F1 */ "sbc ($%02x),y",
	/* $F2 */ "sbc ($%02x)",
	/* $F3 */ "sbc ($%02x,S),y",
	/* $F4 */ "pea #$%04x",
	/* $F5 */ "sbc $%02x,x",
	/* $F6 */ "inc $%02x,x",
	/* $F7 */ "sbc [$%02x],y",
	/* $F8 */ "sed ",
	/* $F9 */ "sbc $%04x,y",
	/* $FA */ "plx ",
	/* $FB */ "xce ",
	/* $FC */ "jsr ($%04x,x)",
	/* $FD */ "sbc $%04x,x",
	/* $FE */ "inc $%04x,x",
	/* $FF */ "sbc $%06x,x"};

static const char *sym_mnemonics[256] = {
	// $0X
	/* $00 */ "brk ",
	/* $01 */ "ora (%s, x)",
	/* $02 */ "nop ",
	/* $03 */ "nop ",
	/* $04 */ "tsb %s",
	/* $05 */ "ora %s",
	/* $06 */ "asl %s",
	/* $07 */ "rmb0 %s",
	/* $08 */ "php ",
	/* $09 */ "ora #%s",
	/* $0A */ "asl a",
	/* $0B */ "nop ",
	/* $0C */ "tsb %s",
	/* $0D */ "ora %s",
	/* $0E */ "asl %s",
	/* $0F */ "bbr0 %s, $%04x",

	// $1X
	/* $10 */ "bpl %s",
	/* $11 */ "ora (%s), y",
	/* $12 */ "ora (%s)",
	/* $13 */ "nop ",
	/* $14 */ "trb %s",
	/* $15 */ "ora %s, x",
	/* $16 */ "asl %s, x",
	/* $17 */ "rmb1 %s",
	/* $18 */ "clc ",
	/* $19 */ "ora %s, y",
	/* $1A */ "inc a",
	/* $1B */ "nop ",
	/* $1C */ "trb %s",
	/* $1D */ "ora %s, x",
	/* $1E */ "asl %s, x",
	/* $1F */ "bbr1 %s, $%04x",

	// $2X
	/* $20 */ "jsr %s",
	/* $21 */ "and (%s, x)",
	/* $22 */ "nop ",
	/* $23 */ "nop ",
	/* $24 */ "bit %s",
	/* $25 */ "and %s",
	/* $26 */ "rol %s",
	/* $27 */ "rmb2 %s",
	/* $28 */ "plp ",
	/* $29 */ "and #%s",
	/* $2A */ "rol a",
	/* $2B */ "nop ",
	/* $2C */ "bit %s",
	/* $2D */ "and %s",
	/* $2E */ "rol %s",
	/* $2F */ "bbr2 %s, $%04x",

	// $3X
	/* $30 */ "bmi %s",
	/* $31 */ "and (%s), y",
	/* $32 */ "and (%s)",
	/* $33 */ "nop ",
	/* $34 */ "bit %s, x",
	/* $35 */ "and %s, x",
	/* $36 */ "rol %s, x",
	/* $37 */ "rmb3 %s",
	/* $38 */ "sec ",
	/* $39 */ "and %s, y",
	/* $3A */ "dec a",
	/* $3B */ "nop ",
	/* $3C */ "bit %s, x",
	/* $3D */ "and %s, x",
	/* $3E */ "rol %s, x",
	/* $3F */ "bbr3 %s, $%04x",

	// $4X
	/* $40 */ "rti ",
	/* $41 */ "eor (%s, x)",
	/* $42 */ "nop ",
	/* $43 */ "nop ",
	/* $44 */ "nop ",
	/* $45 */ "eor %s",
	/* $46 */ "lsr %s",
	/* $47 */ "rmb4 %s",
	/* $48 */ "pha ",
	/* $49 */ "eor #%s",
	/* $4A */ "lsr a",
	/* $4B */ "nop ",
	/* $4C */ "jmp %s",
	/* $4D */ "eor %s",
	/* $4E */ "lsr %s",
	/* $4F */ "bbr4 %s, $%04x",

	// $5X
	/* $50 */ "bvc %s",
	/* $51 */ "eor (%s), y",
	/* $52 */ "eor (%s)",
	/* $53 */ "nop ",
	/* $54 */ "nop ",
	/* $55 */ "eor %s, x",
	/* $56 */ "lsr %s, x",
	/* $57 */ "rmb5 %s",
	/* $58 */ "cli ",
	/* $59 */ "eor %s, y",
	/* $5A */ "phy ",
	/* $5B */ "nop ",
	/* $5C */ "nop ",
	/* $5D */ "eor %s, x",
	/* $5E */ "lsr %s, x",
	/* $5F */ "bbr5 %s, $%04x",

	// $6X
	/* $60 */ "rts ",
	/* $61 */ "adc (%s, x)",
	/* $62 */ "nop ",
	/* $63 */ "nop ",
	/* $64 */ "stz %s",
	/* $65 */ "adc %s",
	/* $66 */ "ror %s",
	/* $67 */ "rmb6 %s",
	/* $68 */ "pla ",
	/* $69 */ "adc #%s",
	/* $6A */ "ror a",
	/* $6B */ "nop ",
	/* $6C */ "jmp (%s)",
	/* $6D */ "adc %s",
	/* $6E */ "ror %s",
	/* $6F */ "bbr6 %s, $%04x",

	// $7X
	/* $70 */ "bvs %s",
	/* $71 */ "adc (%s), y",
	/* $72 */ "adc (%s)",
	/* $73 */ "nop ",
	/* $74 */ "stz %s, x",
	/* $75 */ "adc %s, x",
	/* $76 */ "ror %s, x",
	/* $77 */ "rmb7 %s",
	/* $78 */ "sei ",
	/* $79 */ "adc %s, y",
	/* $7A */ "ply ",
	/* $7B */ "nop ",
	/* $7C */ "jmp (%s, x)",
	/* $7D */ "adc %s, x",
	/* $7E */ "ror %s, x",
	/* $7F */ "bbr7 %s, $%04x",

	// $8X
	/* $80 */ "bra %s",
	/* $81 */ "sta (%s, x)",
	/* $82 */ "nop ",
	/* $83 */ "nop ",
	/* $84 */ "sty %s",
	/* $85 */ "sta %s",
	/* $86 */ "stx %s",
	/* $87 */ "smb0 %s",
	/* $88 */ "dey ",
	/* $89 */ "bit #%s",
	/* $8A */ "txa ",
	/* $8B */ "nop ",
	/* $8C */ "sty %s",
	/* $8D */ "sta %s",
	/* $8E */ "stx %s",
	/* $8F */ "bbs0 %s, $%04x",

	// $9X
	/* $90 */ "bcc %s",
	/* $91 */ "sta (%s), y",
	/* $92 */ "sta (%s)",
	/* $93 */ "nop ",
	/* $94 */ "sty %s, x",
	/* $95 */ "sta %s, x",
	/* $96 */ "stx %s, y",
	/* $97 */ "smb1 %s",
	/* $98 */ "tya ",
	/* $99 */ "sta %s, y",
	/* $9A */ "txs ",
	/* $9B */ "nop ",
	/* $9C */ "stz %s",
	/* $9D */ "sta %s, x",
	/* $9E */ "stz %s, x",
	/* $9F */ "bbs1 %s, $%04x",

	// $AX
	/* $A0 */ "ldy #%s",
	/* $A1 */ "lda (%s, x)",
	/* $A2 */ "ldx #%s",
	/* $A3 */ "nop ",
	/* $A4 */ "ldy %s",
	/* $A5 */ "lda %s",
	/* $A6 */ "ldx %s",
	/* $A7 */ "smb2 %s",
	/* $A8 */ "tay ",
	/* $A9 */ "lda #%s",
	/* $AA */ "tax ",
	/* $AB */ "nop ",
	/* $AC */ "ldy %s",
	/* $AD */ "lda %s",
	/* $AE */ "ldx %s",
	/* $AF */ "bbs2 %s, $%04x",

	// $BX
	/* $B0 */ "bcs %s",
	/* $B1 */ "lda (%s), y",
	/* $B2 */ "lda (%s)",
	/* $B3 */ "nop ",
	/* $B4 */ "ldy %s, x",
	/* $B5 */ "lda %s, x",
	/* $B6 */ "ldx %s, y",
	/* $B7 */ "smb3 %s",
	/* $B8 */ "clv ",
	/* $B9 */ "lda %s, y",
	/* $BA */ "tsx ",
	/* $BB */ "nop ",
	/* $BC */ "ldy %s, x",
	/* $BD */ "lda %s, x",
	/* $BE */ "ldx %s, y",
	/* $BF */ "bbs3 %s, $%04x",

	// $CX
	/* $C0 */ "cpy #%s",
	/* $C1 */ "cmp (%s, x)",
	/* $C2 */ "nop ",
	/* $C3 */ "nop ",
	/* $C4 */ "cpy %s",
	/* $C5 */ "cmp %s",
	/* $C6 */ "dec %s",
	/* $C7 */ "smb4 %s",
	/* $C8 */ "iny ",
	/* $C9 */ "cmp #%s",
	/* $CA */ "dex ",
	/* $CB */ "wai ",
	/* $CC */ "cpy %s",
	/* $CD */ "cmp %s",
	/* $CE */ "dec %s",
	/* $CF */ "bbs4 %s, $%04x",

	// $DX
	/* $D0 */ "bne %s",
	/* $D1 */ "cmp (%s), y",
	/* $D2 */ "cmp (%s)",
	/* $D3 */ "nop ",
	/* $D4 */ "nop ",
	/* $D5 */ "cmp %s, x",
	/* $D6 */ "dec %s, x",
	/* $D7 */ "smb5 %s",
	/* $D8 */ "cld ",
	/* $D9 */ "cmp %s, y",
	/* $DA */ "phx ",
	/* $DB */ "stp ",
	/* $DC */ "nop ",
	/* $DD */ "cmp %s, x",
	/* $DE */ "dec %s, x",
	/* $DF */ "bbs5 %s, $%04x",

	// $EX
	/* $E0 */ "cpx #%s",
	/* $E1 */ "sbc (%s, x)",
	/* $E2 */ "nop ",
	/* $E3 */ "nop ",
	/* $E4 */ "cpx %s",
	/* $E5 */ "sbc %s",
	/* $E6 */ "inc %s",
	/* $E7 */ "smb6 %s",
	/* $E8 */ "inx ",
	/* $E9 */ "sbc #%s",
	/* $EA */ "nop ",
	/* $EB */ "nop ",
	/* $EC */ "cpx %s",
	/* $ED */ "sbc %s",
	/* $EE */ "inc %s",
	/* $EF */ "bbs6 %s, $%04x",

	// $FX
	/* $F0 */ "beq %s",
	/* $F1 */ "sbc (%s), y",
	/* $F2 */ "sbc (%s)",
	/* $F3 */ "nop ",
	/* $F4 */ "nop ",
	/* $F5 */ "sbc %s, x",
	/* $F6 */ "inc %s, x",
	/* $F7 */ "smb7 %s",
	/* $F8 */ "sed ",
	/* $F9 */ "sbc %s, y",
	/* $FA */ "plx ",
	/* $FB */ "nop ",
	/* $FC */ "nop ",
	/* $FD */ "sbc %s, x",
	/* $FE */ "inc %s, x",
	/* $FF */ "bbs7 %s, $%04x"};
