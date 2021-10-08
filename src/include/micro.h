/********************************
 * DFCPU microcode header stuff *
 * this stuff sucks             *
 ********************************/
#ifndef _DFCPU_MICRO_H
#define _DFCPU_MICRO_H

enum dfcpu_asm_instr_bit_thing {
  nop =  0000,
  lda = 0001,
  add = 0010,
  sub = 0011,
  sto = 0100,
  out = 0101,
  jmp = 0110,
  hlt = 0111,
  hcf = 0111,
};

enum dfcpu_other_weird_stuff {
  CE,
  CO,
  J,
  MI,
  RO,
  II,
  IO,
  OI,
  BI,
  EO,
  SU,
  AI,
  AO,
  RI,
  HLT,
  X,
};
int dfcpu_rom_addresses[16];

int dfcpu_rom_addresses[16] =  {
  0,1,2,3,4,5,6,7,
  3,6,9,12,15,18,21,24
};

/* all the instructions get defined |
 ************************************/

#define DFCPU_INSTR_NOP X X X // Straight edge, like on the compilation Flex Your Head, if it was one more X, it would be porn and there's nothing I would be able to do about it :)
#define DFCPU_INSTR_LDA IO MI

#endif //_DFCPU_MICRO_H
