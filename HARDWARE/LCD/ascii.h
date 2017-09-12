
#ifndef __ASCII_H
#define __ASCII_H

char const ascii_table_8x16[95][16]={
//粗体 8x16 点阵的 ASCII 码的点阵数据,从"JLX-GB2312"型号的字库 IC 中读出来的国标的.
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //- -(ASCII 码:0X20
0x00,0x00,0x38,0xFC, 0xFC,0x38,0x00,0x00, 0x00,0x00,0x00,0x0D, 0x0D,0x00,0x00,0x00, //-!- ASCII 码:0X21
0x00,0x0E,0x1E,0x00, 0x00,0x1E,0x0E,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //-"-
0x20,0xF8,0xF8,0x20, 0xF8,0xF8,0x20,0x00, 0x02,0x0F,0x0F,0x02, 0x0F,0x0F,0x02,0x00, //-#-
0x38,0x7C,0x44,0x47, 0x47,0xCC,0x98,0x00, 0x06,0x0C,0x08,0x38, 0x38,0x0F,0x07,0x00, //-$-
0x30,0x30,0x00,0x80, 0xC0,0x60,0x30,0x00, 0x0C,0x06,0x03,0x01, 0x00,0x0C,0x0C,0x00, //-%-
0x80,0xD8,0x7C,0xE4, 0xBC,0xD8,0x40,0x00, 0x07,0x0F,0x08,0x08, 0x07,0x0F,0x08,0x00, //-&-
0x00,0x10,0x1E,0x0E, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //-'-
0x00,0x00,0xF0,0xF8, 0x0C,0x04,0x00,0x00, 0x00,0x00,0x03,0x07, 0x0C,0x08,0x00,0x00, //-(-
0x00,0x00,0x04,0x0C, 0xF8,0xF0,0x00,0x00, 0x00,0x00,0x08,0x0C, 0x07,0x03,0x00,0x00, //-)-
0x80,0xA0,0xE0,0xC0, 0xC0,0xE0,0xA0,0x80, 0x00,0x02,0x03,0x01, 0x01,0x03,0x02,0x00, //-*- ASCII 码:0X2A
0x00,0x80,0x80,0xE0, 0xE0,0x80,0x80,0x00, 0x00,0x00,0x00,0x03, 0x03,0x00,0x00,0x00, //-+-
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x10,0x1E, 0x0E,0x00,0x00,0x00, //-,-
0x80,0x80,0x80,0x80, 0x80,0x80,0x80,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //---
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x0C, 0x0C,0x00,0x00,0x00, //-.-
0x00,0x00,0x00,0x80, 0xC0,0x60,0x30,0x00, 0x0C,0x06,0x03,0x01, 0x00,0x00,0x00,0x00, //-/-
0xF8,0xF8,0x0C,0xC4, 0x0C,0xF8,0xF0,0x00, 0x03,0x07,0x0C,0x08, 0x0C,0x07,0x03,0x00, //-0- ASCII 码:0X30
0x00,0x10,0x18,0xFC, 0xFC,0x00,0x00,0x00, 0x00,0x08,0x08,0x0F, 0x0F,0x08,0x08,0x00, //-1-
0x08,0x0C,0x84,0xC4, 0x64,0x3C,0x18,0x00, 0x0E,0x0F,0x09,0x08, 0x08,0x0C,0x0C,0x00, //-2-
0x08,0x0C,0x44,0x44, 0x44,0xFC,0xB8,0x00, 0x04,0x0C,0x08,0x08, 0x08,0x0F,0x07,0x00, //-3-
0xC0,0xE0,0xB0,0x98, 0xFC,0xFC,0x80,0x00, 0x00,0x00,0x00,0x08, 0x0F,0x0F,0x08,0x00, //-4- ASCII 码:0X34
0x7C,0x7C,0x44,0x44, 0x44,0xC4,0x84,0x00, 0x04,0x0C,0x08,0x08, 0x08,0x0F,0x07,0x00, //-5-
0xF0,0xF8,0x4C,0x44, 0x44,0xC0,0x80,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0F,0x07,0x00, //-6-
0x0C,0x0C,0x04,0x84, 0xC4,0x7C,0x3C,0x00, 0x00,0x00,0x0F,0x0F, 0x00,0x00,0x00,0x00, //-7-
0xB8,0xFC,0x44,0x44, 0x44,0xFC,0xB8,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0F,0x07,0x00, //-8-
0x38,0x7C,0x44,0x44, 0x44,0xFC,0xF8,0x00, 0x00,0x08,0x08,0x08, 0x0C,0x07,0x03,0x00, //-9-
0x00,0x00,0x00,0x30, 0x30,0x00,0x00,0x00, 0x00,0x00,0x00,0x06, 0x06,0x00,0x00,0x00, //-:-
0x00,0x00,0x00,0x30, 0x30,0x00,0x00,0x00, 0x00,0x00,0x08,0x0E, 0x06,0x00,0x00,0x00, //-;-
0x00,0x80,0xC0,0x60, 0x30,0x18,0x08,0x00, 0x00,0x00,0x01,0x03, 0x06,0x0C,0x08,0x00, //-<-
0x00,0x20,0x20,0x20, 0x20,0x20,0x20,0x00, 0x00,0x01,0x01,0x01, 0x01,0x01,0x01,0x00, //-=-
0x00,0x08,0x18,0x30, 0x60,0xC0,0x80,0x00, 0x00,0x08,0x0C,0x06, 0x03,0x01,0x00,0x00, //->- ASCII 码:0X3E
0x18,0x1C,0x04,0xC4, 0xE4,0x3C,0x18,0x00, 0x00,0x00,0x00,0x0D, 0x0D,0x00,0x00,0x00, //-?-
0xF0,0xF0,0x08,0xC8, 0xC8,0xF8,0xF0,0x00, 0x07,0x0F,0x08,0x0B, 0x0B,0x0B,0x01,0x00, //-@-
0xE0,0xF0,0x98,0x8C, 0x98,0xF0,0xE0,0x00, 0x0F,0x0F,0x00,0x00, 0x00,0x0F,0x0F,0x00, //-A- ASCII 码:0X41
0x04,0xFC,0xFC,0x44, 0x44,0xFC,0xB8,0x00, 0x08,0x0F,0x0F,0x08, 0x08,0x0F,0x07,0x00, //-B-
0xF0,0xF8,0x0C,0x04, 0x04,0x0C,0x18,0x00, 0x03,0x07,0x0C,0x08, 0x08,0x0C,0x06,0x00, //-C-
0x04,0xFC,0xFC,0x04, 0x0C,0xF8,0xF0,0x00, 0x08,0x0F,0x0F,0x08, 0x0C,0x07,0x03,0x00, //-D-
0x04,0xFC,0xFC,0x44, 0xE4,0x0C,0x1C,0x00, 0x08,0x0F,0x0F,0x08, 0x08,0x0C,0x0E,0x00, //-E-
0x04,0xFC,0xFC,0x44, 0xE4,0x0C,0x1C,0x00, 0x08,0x0F,0x0F,0x08, 0x00,0x00,0x00,0x00, //-F-
0xF0,0xF8,0x0C,0x84, 0x84,0x8C,0x98,0x00, 0x03,0x07,0x0C,0x08, 0x08,0x07,0x0F,0x00, //-G-
0xFC,0xFC,0x40,0x40, 0x40,0xFC,0xFC,0x00, 0x0F,0x0F,0x00,0x00, 0x00,0x0F,0x0F,0x00, //-H- ASCII 码:0X48
0x00,0x00,0x04,0xFC, 0xFC,0x04,0x00,0x00, 0x00,0x00,0x08,0x0F, 0x0F,0x08,0x00,0x00, //-I-
0x00,0x00,0x00,0x04, 0xFC,0xFC,0x04,0x00, 0x07,0x0F,0x08,0x08, 0x0F,0x07,0x00,0x00, //-J-
0x04,0xFC,0xFC,0xC0, 0xE0,0x3C,0x1C,0x00, 0x08,0x0F,0x0F,0x00, 0x01,0x0F,0x0E,0x00, //-K-
0x04,0xFC,0xFC,0x04, 0x00,0x00,0x00,0x00, 0x08,0x0F,0x0F,0x08, 0x08,0x0C,0x0E,0x00, //-L-
0xFC,0xFC,0x38,0x70, 0x38,0xFC,0xFC,0x00, 0x0F,0x0F,0x00,0x00, 0x00,0x0F,0x0F,0x00, //-M-
0xFC,0xFC,0x38,0x70, 0xE0,0xFC,0xFC,0x00, 0x0F,0x0F,0x00,0x00, 0x00,0x0F,0x0F,0x00, //-N-
0xF8,0xFC,0x04,0x04, 0x04,0xFC,0xF8,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0F,0x07,0x00, //-O-
0x04,0xFC,0xFC,0x44, 0x44,0x7C,0x38,0x00, 0x08,0x0F,0x0F,0x08, 0x00,0x00,0x00,0x00, //-P-
0xF8,0xFC,0x04,0x04, 0x04,0xFC,0xF8,0x00, 0x07,0x0F,0x08,0x0E, 0x3C,0x3F,0x27,0x00, //-Q-
0x04,0xFC,0xFC,0x44, 0xC4,0xFC,0x38,0x00, 0x08,0x0F,0x0F,0x00, 0x00,0x0F,0x0F,0x00, //-R-
0x18,0x3C,0x64,0x44, 0xC4,0x9C,0x18,0x00, 0x06,0x0E,0x08,0x08, 0x08,0x0F,0x07,0x00, //-S-
0x00,0x1C,0x0C,0xFC, 0xFC,0x0C,0x1C,0x00, 0x00,0x00,0x08,0x0F, 0x0F,0x08,0x00,0x00, //-T-
0xFC,0xFC,0x00,0x00, 0x00,0xFC,0xFC,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0F,0x07,0x00, //-U-
0xFC,0xFC,0x00,0x00, 0x00,0xFC,0xFC,0x00, 0x01,0x03,0x06,0x0C, 0x06,0x03,0x01,0x00, //-V-
0xFC,0xFC,0x00,0x00, 0x00,0xFC,0xFC,0x00, 0x07,0x0F,0x0E,0x03, 0x0E,0x0F,0x07,0x00, //-W-
0x0C,0x3C,0xF0,0xE0, 0xF0,0x3C,0x0C,0x00, 0x0C,0x0F,0x03,0x01, 0x03,0x0F,0x0C,0x00, //-X-
0x00,0x0C,0x7C,0xC0, 0xC0,0x7C,0x3C,0x00, 0x00,0x00,0x08,0x0F, 0x0F,0x08,0x00,0x00, //-Y-
0x1C,0x0C,0x84,0xC4, 0x64,0x3C,0x1C,0x00, 0x0E,0x0F,0x09,0x08, 0x08,0x0C,0x0E,0x00, //-Z-
0x00,0x00,0xFC,0xFC, 0x04,0x04,0x00,0x00, 0x00,0x00,0x0F,0x0F, 0x08,0x08,0x00,0x00, //-[-
0x38,0x70,0xE0,0xC0, 0x80,0x00,0x00,0x00, 0x00,0x00,0x00,0x01, 0x03,0x07,0x0E,0x00, //-\-
0x00,0x00,0x04,0x04, 0xFC,0xFC,0x00,0x00, 0x00,0x00,0x08,0x08, 0x0F,0x0F,0x00,0x00, //-]-
0x08,0x0C,0x06,0x03, 0x06,0x0C,0x08,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //-^-
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x20,0x20,0x20,0x20, 0x20,0x20,0x20,0x20, //-_-
0x00,0x00,0x03,0x07, 0x04,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //-`-
0x00,0xA0,0xA0,0xA0, 0xE0,0xC0,0x00,0x00, 0x07,0x0F,0x08,0x08, 0x07,0x0F,0x08,0x00, //-a- ASCII 码:0X61
0x04,0xFC,0xFC,0x20, 0x60,0xC0,0x80,0x00, 0x00,0x0F,0x0F,0x08, 0x08,0x0F,0x07,0x00, //-b-
0xC0,0xE0,0x20,0x20, 0x20,0x60,0x40,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0C,0x04,0x00, //-c-
0x80,0xC0,0x60,0x24, 0xFC,0xFC,0x00,0x00, 0x07,0x0F,0x08,0x08, 0x07,0x0F,0x08,0x00, //-d-
0xC0,0xE0,0xA0,0xA0, 0xA0,0xE0,0xC0,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0C,0x04,0x00, //-e-
0x40,0xF8,0xFC,0x44, 0x0C,0x18,0x00,0x00, 0x08,0x0F,0x0F,0x08, 0x00,0x00,0x00,0x00, //-f
0xC0,0xE0,0x20,0x20, 0xC0,0xE0,0x20,0x00, 0x27,0x6F,0x48,0x48, 0x7F,0x3F,0x00,0x00, //-g-
0x04,0xFC,0xFC,0x40, 0x20,0xE0,0xC0,0x00, 0x08,0x0F,0x0F,0x00, 0x00,0x0F,0x0F,0x00, //-h-
0x00,0x00,0x20,0xEC, 0xEC,0x00,0x00,0x00, 0x00,0x00,0x08,0x0F, 0x0F,0x08,0x00,0x00, //-i-
0x00,0x00,0x00,0x00, 0x20,0xEC,0xEC,0x00, 0x00,0x30,0x70,0x40, 0x40,0x7F,0x3F,0x00, //-j-
0x04,0xFC,0xFC,0x80, 0xC0,0x60,0x20,0x00, 0x08,0x0F,0x0F,0x01, 0x03,0x0E,0x0C,0x00, //-k-
0x00,0x00,0x04,0xFC, 0xFC,0x00,0x00,0x00, 0x00,0x00,0x08,0x0F, 0x0F,0x08,0x00,0x00, //-l-
0xE0,0xE0,0x60,0xC0, 0x60,0xE0,0xC0,0x00, 0x0F,0x0F,0x00,0x07, 0x00,0x0F,0x0F,0x00, //-m-
0x20,0xE0,0xC0,0x20, 0x20,0xE0,0xC0,0x00, 0x00,0x0F,0x0F,0x00, 0x00,0x0F,0x0F,0x00, //-n-
0xC0,0xE0,0x20,0x20, 0x20,0xE0,0xC0,0x00, 0x07,0x0F,0x08,0x08, 0x08,0x0F,0x07,0x00, //-o-
0x20,0xE0,0xC0,0x20, 0x20,0xE0,0xC0,0x00, 0x40,0x7F,0x7F,0x48, 0x08,0x0F,0x07,0x00, //-p-
0xC0,0xE0,0x20,0x20, 0xC0,0xE0,0x20,0x00, 0x07,0x0F,0x08,0x48, 0x7F,0x7F,0x40,0x00, //-q-
0x20,0xE0,0xC0,0x60, 0x20,0xE0,0xC0,0x00, 0x08,0x0F,0x0F,0x08, 0x00,0x00,0x00,0x00, //-r-
0x40,0xE0,0xA0,0x20, 0x20,0x60,0x40,0x00, 0x04,0x0C,0x09,0x09, 0x0B,0x0E,0x04,0x00, //-s-
0x20,0x20,0xF8,0xFC, 0x20,0x20,0x00,0x00, 0x00,0x00,0x07,0x0F, 0x08,0x0C,0x04,0x00, //-t-
0xE0,0xE0,0x00,0x00, 0xE0,0xE0,0x00,0x00, 0x07,0x0F,0x08,0x08, 0x07,0x0F,0x08,0x00, //-u-
0x00,0xE0,0xE0,0x00, 0x00,0xE0,0xE0,0x00, 0x00,0x03,0x07,0x0C, 0x0C,0x07,0x03,0x00, //-v-
0xE0,0xE0,0x00,0x80, 0x00,0xE0,0xE0,0x00, 0x07,0x0F,0x0C,0x07, 0x0C,0x0F,0x07,0x00, //-w-
0x20,0x60,0xC0,0x80, 0xC0,0x60,0x20,0x00, 0x08,0x0C,0x07,0x03, 0x07,0x0C,0x08,0x00, //-x-
0xE0,0xE0,0x00,0x00, 0x00,0xE0,0xE0,0x00, 0x47,0x4F,0x48,0x48, 0x68,0x3F,0x1F,0x00, //-y-
0x60,0x60,0x20,0xA0, 0xE0,0x60,0x20,0x00, 0x0C,0x0E,0x0B,0x09, 0x08,0x0C,0x0C,0x00, //-z- //
0x00,0x40,0x40,0xF8, 0xBC,0x04,0x04,0x00, 0x00,0x00,0x00,0x07, 0x0F,0x08,0x08,0x00, //-{-
0x00,0x00,0x00,0xBC, 0xBC,0x00,0x00,0x00, 0x00,0x00,0x00,0x0F, 0x0F,0x00,0x00,0x00, //-|-
0x00,0x04,0x04,0xBC, 0xF8,0x40,0x40,0x00, 0x00,0x08,0x08,0x0F, 0x07,0x00,0x00,0x00, //-}-
0x08,0x0C,0x04,0x0C, 0x08,0x0C,0x04,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, //-~- ASCII 码:0X7E
};

char const ascii_table_5x7[95][5]={
/*全体 ASCII 列表:5x7 点阵*/
0x00,0x00,0x00,0x00,0x00,//- - //space
0x00,0x00,0x4f,0x00,0x00,//-!-
0x00,0x07,0x00,0x07,0x00,//-"-
0x14,0x7f,0x14,0x7f,0x14,//-#-
0x24,0x2a,0x7f,0x2a,0x12,//-$-
0x23,0x13,0x08,0x64,0x62,//-%-
0x36,0x49,0x55,0x22,0x50,//-&-
0x00,0x05,0x07,0x00,0x00,//-'-
0x00,0x1c,0x22,0x41,0x00,//-(-
0x00,0x41,0x22,0x1c,0x00,//-)-
0x14,0x08,0x3e,0x08,0x14,//-*-
0x08,0x08,0x3e,0x08,0x08,//-+-
0x00,0x50,0x30,0x00,0x00,//-,-
0x08,0x08,0x08,0x08,0x08,//---
0x00,0x60,0x60,0x00,0x00,//-.-
0x20,0x10,0x08,0x04,0x02,//-/-
0x3e,0x51,0x49,0x45,0x3e,//-0-
0x00,0x42,0x7f,0x40,0x00,//-1-
0x42,0x61,0x51,0x49,0x46,//-2-
0x21,0x41,0x45,0x4b,0x31,//-3-
0x18,0x14,0x12,0x7f,0x10,//-4-
0x27,0x45,0x45,0x45,0x39,//-5-
0x3c,0x4a,0x49,0x49,0x30,//-6-
0x01,0x71,0x09,0x05,0x03,//-7-
0x36,0x49,0x49,0x49,0x36,//-8-
0x06,0x49,0x49,0x29,0x1e,//-9-
0x00,0x36,0x36,0x00,0x00,//-:-
0x00,0x56,0x36,0x00,0x00,//-;-
0x08,0x14,0x22,0x41,0x00,//-<-
0x14,0x14,0x14,0x14,0x14,//-=-
0x00,0x41,0x22,0x14,0x08,//->-
0x02,0x01,0x51,0x09,0x06,//-?-
0x32,0x49,0x79,0x41,0x3e,//-@-
0x7e,0x11,0x11,0x11,0x7e,//-A-
0x7f,0x49,0x49,0x49,0x36,//-B-
0x3e,0x41,0x41,0x41,0x22,//-C-
0x7f,0x41,0x41,0x22,0x1c,//-D-
0x7f,0x49,0x49,0x49,0x41,//-E-
0x7f,0x09,0x09,0x09,0x01,//-F-
0x3e,0x41,0x49,0x49,0x7a,//-G-
0x7f,0x08,0x08,0x08,0x7f,//-H-
0x00,0x41,0x7f,0x41,0x00,//-I-
0x20,0x40,0x41,0x3f,0x01,//-J-
0x7f,0x08,0x14,0x22,0x41,//-K-
0x7f,0x40,0x40,0x40,0x40,//-L-
0x7f,0x02,0x0c,0x02,0x7f,//-M-
0x7f,0x04,0x08,0x10,0x7f,//-N-
0x3e,0x41,0x41,0x41,0x3e,//-O-
0x7f,0x09,0x09,0x09,0x06,//-P-
0x3e,0x41,0x51,0x21,0x5e,//-Q-
0x7f,0x09,0x19,0x29,0x46,//-R-
0x46,0x49,0x49,0x49,0x31,//-S-
0x01,0x01,0x7f,0x01,0x01,//-T-
0x3f,0x40,0x40,0x40,0x3f,//-U-
0x1f,0x20,0x40,0x20,0x1f,//-V-
0x3f,0x40,0x38,0x40,0x3f,//-W-
0x63,0x14,0x08,0x14,0x63,//-X-
0x07,0x08,0x70,0x08,0x07,//-Y-
0x61,0x51,0x49,0x45,0x43,//-Z-
0x00,0x7f,0x41,0x41,0x00,//-[-
0x02,0x04,0x08,0x10,0x20,//-\-
0x00,0x41,0x41,0x7f,0x00,//-]-
0x04,0x02,0x01,0x02,0x04,//-^-
0x40,0x40,0x40,0x40,0x40,//-_-
0x01,0x02,0x04,0x00,0x00,//-`-
0x20,0x54,0x54,0x54,0x78,//-a-
0x7f,0x48,0x48,0x48,0x30,//-b-
0x38,0x44,0x44,0x44,0x44,//-c-
0x30,0x48,0x48,0x48,0x7f,//-d-
0x38,0x54,0x54,0x54,0x58,//-e-
0x00,0x08,0x7e,0x09,0x02,//-f-
0x48,0x54,0x54,0x54,0x3c,//-g-
0x7f,0x08,0x08,0x08,0x70,//-h-
0x00,0x00,0x7a,0x00,0x00,//-i-
0x20,0x40,0x40,0x3d,0x00,//-j-
0x7f,0x20,0x28,0x44,0x00,//-k-
0x00,0x41,0x7f,0x40,0x00,//-l-
0x7c,0x04,0x38,0x04,0x7c,//-m-
0x7c,0x08,0x04,0x04,0x78,//-n-
0x38,0x44,0x44,0x44,0x38,//-o-
0x7c,0x14,0x14,0x14,0x08,//-p-
0x08,0x14,0x14,0x14,0x7c,//-q-
0x7c,0x08,0x04,0x04,0x08,//-r-
0x48,0x54,0x54,0x54,0x24,//-s-
0x04,0x04,0x3f,0x44,0x24,//-t-
0x3c,0x40,0x40,0x40,0x3c,//-u-
0x1c,0x20,0x40,0x20,0x1c,//-v-
0x3c,0x40,0x30,0x40,0x3c,//-w-
0x44,0x28,0x10,0x28,0x44,//-x-
0x04,0x48,0x30,0x08,0x04,//-y-
0x44,0x64,0x54,0x4c,0x44,//-z-
0x08,0x36,0x41,0x41,0x00,//-{-
0x00,0x00,0x77,0x00,0x00,//-|-
0x00,0x41,0x41,0x36,0x08,//-}-
0x04,0x02,0x02,0x02,0x01,//-~-
};

#endif
