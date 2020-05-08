#include "DFRobot_Character.h"


const uint8_t table_character_6_8[][6] = {
0x00,0x00,0x00,0x00,0x00,0x00,//space
0x00,0x00,0x5F,0x00,0x00,0x00,//!
0x00,0x07,0x00,0x07,0x00,0x00,//"
0x14,0x7F,0x14,0x7F,0x14,0x00,//#
0x24,0x2A,0x7F,0x2A,0x12,0x00,//$
0x23,0x13,0x08,0x64,0x62,0x00,//%
0x36,0x49,0x56,0x20,0x50,0x00,//&
0x00,0x08,0x07,0x03,0x00,0x00,//'
0x00,0x1C,0x22,0x41,0x00,0x00,//(
0x00,0x41,0x22,0x1C,0x00,0x00,//)
0x24,0x18,0x7E,0x18,0x24,0x00,//*
0x08,0x08,0x3E,0x08,0x08,0x00,//+
0x00,0x80,0x70,0x30,0x00,0x00,//,
0x08,0x08,0x08,0x08,0x08,0x00,//-
0x00,0x00,0x60,0x60,0x00,0x00,//.
0x20,0x10,0x08,0x04,0x02,0x00,///
0x3E,0x41,0x49,0x41,0x3E,0x00,//0
0x00,0x42,0x7F,0x40,0x00,0x00,//1
0x72,0x49,0x49,0x49,0x46,0x00,//2
0x21,0x41,0x49,0x4D,0x32,0x00,//3
0x18,0x14,0x12,0x7F,0x10,0x00,//4
0x27,0x45,0x45,0x45,0x38,0x00,//5
0x3C,0x4A,0x49,0x49,0x31,0x00,//6
0x41,0x21,0x11,0x09,0x07,0x00,//7
0x36,0x49,0x49,0x49,0x36,0x00,//8
0x46,0x49,0x49,0x29,0x16,0x00,//9
0x00,0x00,0x14,0x00,0x00,0x00,//:
0x00,0x40,0x34,0x00,0x00,0x00,//;
0x00,0x08,0x14,0x22,0x41,0x00,//<
0x14,0x14,0x14,0x14,0x14,0x00,//=
0x00,0x41,0x22,0x14,0x08,0x00,//>
0x02,0x01,0x59,0x09,0x06,0x00,//?
0x3E,0x41,0x5D,0x59,0x4E,0x00,//@
0x7C,0x12,0x11,0x12,0x7C,0x00,//A
0x7F,0x49,0x49,0x49,0x36,0x00,//B
0x3E,0x41,0x41,0x41,0x22,0x00,//C
0x7F,0x41,0x41,0x41,0x3E,0x00,//D
0x7F,0x49,0x49,0x49,0x41,0x00,//E
0x7F,0x09,0x09,0x09,0x01,0x00,//F
0x3E,0x41,0x41,0x51,0x73,0x00,//G
0x7F,0x08,0x08,0x08,0x7F,0x00,//H
0x00,0x41,0x7F,0x41,0x00,0x00,//I
0x20,0x40,0x41,0x3F,0x01,0x00,//J
0x7F,0x08,0x14,0x22,0x41,0x00,//K
0x7F,0x40,0x40,0x40,0x40,0x00,//L
0x7F,0x02,0x1C,0x02,0x7F,0x00,//M
0x7F,0x04,0x08,0x10,0x7F,0x00,//N
0x3E,0x41,0x41,0x41,0x3E,0x00,//O
0x7F,0x09,0x09,0x09,0x06,0x00,//P
0x3E,0x41,0x51,0x21,0x5E,0x00,//Q
0x7F,0x09,0x19,0x29,0x46,0x00,//R
0x26,0x49,0x49,0x49,0x32,0x00,//S
0x03,0x01,0x7F,0x01,0x03,0x00,//T
0x3F,0x40,0x40,0x40,0x3F,0x00,//U
0x1F,0x20,0x40,0x20,0x1F,0x00,//V
0x3F,0x40,0x38,0x40,0x3F,0x00,//W
0x63,0x14,0x08,0x14,0x63,0x00,//X
0x03,0x04,0x78,0x04,0x03,0x00,//Y
0x61,0x59,0x49,0x4D,0x43,0x00,//Z
0x00,0x7F,0x41,0x41,0x41,0x00,//[
0x02,0x04,0x08,0x10,0x20,0x00,//"\"
0x00,0x41,0x41,0x41,0x7f,0x00,//]
0x04,0x02,0x01,0x02,0x04,0x00,//^
0x40,0x40,0x40,0x40,0x46,0x00,//_
0x00,0x03,0x07,0x08,0x00,0x00,//'
0x20,0x54,0x54,0x78,0x40,0x00,//a
0x7F,0x28,0x44,0x44,0x38,0x00,//b
0x38,0x44,0x44,0x44,0x28,0x00,//c
0x38,0x44,0x44,0x28,0x7F,0x00,//d
0x38,0x54,0x54,0x54,0x18,0x00,//e
0x00,0x08,0x7E,0x09,0x02,0x00,//f
0x38,0xA4,0xA4,0x9C,0x78,0x00,//g
0x7F,0x08,0x04,0x04,0x78,0x00,//h
0x00,0x44,0x7D,0x40,0x00,0x00,//i
0x20,0x40,0x40,0x3D,0x00,0x00,//j
0x7F,0x10,0x28,0x44,0x00,0x00,//k
0x00,0x41,0x7F,0x40,0x00,0x00,//l
0x7C,0x04,0x78,0x04,0x78,0x00,//m
0x7C,0x08,0x04,0x04,0x78,0x00,//n
0x38,0x44,0x44,0x44,0x38,0x00,//o
0xFC,0x18,0x24,0x24,0x18,0x00,//p
0x18,0x24,0x24,0x18,0xFC,0x00,//q
0x7C,0x08,0x04,0x04,0x08,0x00,//r
0x48,0x54,0x54,0x54,0x24,0x00,//s
0x04,0x04,0x3F,0x44,0x24,0x00,//t
0x3C,0x40,0x40,0x20,0x7C,0x00,//u
0x1C,0x20,0x40,0x20,0x1C,0x00,//v
0x3C,0x40,0x20,0x40,0x3C,0x00,//w
0x44,0x28,0x10,0x28,0x44,0x00,//x
0x4C,0x90,0x90,0x90,0x7C,0x00,//y
0x44,0x64,0x54,0x4C,0x44,0x00,//z
0x00,0x08,0x36,0x41,0x00,0x00,//{
0x00,0x00,0x77,0x00,0x00,0x00,//|
0x00,0x41,0x36,0x08,0x00,0x00,//}
0x02,0x01,0x02,0x04,0x02,0x00,//~
0x00,0x00,0x00,0x00,0x00,0x00
};

int16_t DFRobot_Character_getCharacter(uint8_t *pCh, uint8_t* pBuf, uint8_t* pWidth, uint8_t* pHeight)
{
  uint8_t        var1 = 0;
  if(*pCh < 0x20) {
    if(*pCh > 0x06 && *pCh < 0x0e) {
      *pWidth = 6; *pHeight = 8;
      return 1;
    } else {
      return DISPLAY_ERR_PARAM;
    }
  //utf-8 code
  } else if(*pCh < 0x80) {
	  for(var1 = 0; var1 < 6; var1 ++) {
#ifdef __AVR__
      pBuf[var1] = pgm_read_byte(&table_character_6_8[*pCh - 0x20][var1]);
#else
      pBuf[var1] = table_character_6_8[*pCh - 0x20][var1];
#endif
	  }
	  *pWidth = 6; *pHeight = 8;
	  return 1;
  } else {
    return DISPLAY_ERR_PARAM;
  }
}


