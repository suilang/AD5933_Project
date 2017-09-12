// ------------------  汉字字模的数据结构定义 ------------------------ //
struct typFNT_GB16                 // 汉字字模数据结构
{
       signed char Index[2];               // 汉字内码索引
       char Msk[32];                       // 点阵码数据
};

/////////////////////////////////////////////////////////////////////////
// 汉字字模表                                                          //
// 汉字库: 宋体16.dot 纵向取模上高位,数据排列:从上到下从左到右       //
/////////////////////////////////////////////////////////////////////////
struct typFNT_GB16  GB_16[] =          // 数据表
{

"电", 0x00,0x00,0x1F,0xE0,0x12,0x40,0x12,0x40,0x12,0x40,0x12,0x40,0xFF,0xFC,0x12,0x42,
      0x12,0x42,0x12,0x42,0x12,0x42,0x3F,0xE2,0x10,0x02,0x00,0x0E,0x00,0x00,0x00,0x00,

"阻", 0x00,0x00,0x7F,0xFF,0x40,0x10,0x44,0x08,0x5B,0x10,0x60,0xE2,0x00,0x02,0x3F,0xFE,
      0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x7F,0xFE,0x20,0x02,0x00,0x02,0x00,0x00,

"感", 0x00,0x20,0x3F,0xC2,0x28,0x0C,0x2B,0xE0,0x2A,0x4E,0x2A,0x41,0x2A,0x51,0x2B,0xC9,
      0x28,0x2D,0xFF,0x41,0x20,0x87,0xA1,0x48,0x66,0x24,0x20,0x26,0x00,0xE0,0x00,0x00,

"容", 0x08,0x10,0x30,0x10,0x20,0x20,0x22,0x40,0x24,0xBF,0x29,0x22,0xA2,0x22,0x64,0x22,
      0x22,0x22,0x29,0x22,0x24,0xBF,0x26,0x40,0x20,0x20,0x28,0x30,0x30,0x20,0x00,0x00,

"↑", 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x0C,0x00,0x3C,0x00,
      0x7F,0xFE,0x3C,0x00,0x0C,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

"↓", 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x30,0x00,0x3C,
      0x7F,0xFE,0x00,0x3C,0x00,0x30,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

"←", 0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x80,0x03,0x80,0x07,0xC0,0x07,0xC0,0x09,0x20,
      0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,

"→", 0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
      0x01,0x00,0x09,0x20,0x07,0xC0,0x07,0xC0,0x03,0x80,0x03,0x80,0x01,0x00,0x00,0x00,
			
"确", 0x20,0x80,0x21,0x00,0x27,0xFE,0x39,0x04,0x21,0x04,0x63,0xFD,0x24,0x02,0x0F,0xFC,
      0x14,0x90,0xE4,0x90,0x2F,0xFE,0x34,0x90,0x24,0x91,0x0F,0xFF,0x04,0x00,0x00,0x00,

"定", 0x08,0x01,0x30,0x02,0x20,0x04,0x24,0xF8,0x24,0x04,0x24,0x02,0xA4,0x02,0x67,0xFE,
      0x24,0x42,0x24,0x42,0x2C,0xC2,0x24,0x42,0x20,0x02,0x28,0x06,0x30,0x04,0x00,0x00,
			
"认", 0x02,0x00,0x42,0x00,0x22,0x00,0x33,0xFC,0x00,0x09,0x00,0x12,0x00,0x0C,0x00,0x70,
      0x03,0x80,0xFC,0x00,0x03,0x80,0x00,0x70,0x00,0x0C,0x00,0x03,0x00,0x02,0x00,0x00,

"测", 0x08,0x20,0x44,0x20,0x36,0x7F,0x00,0x80,0x01,0x02,0x3F,0xE4,0x20,0x08,0x2F,0xF0,
      0x20,0x08,0x7F,0xE6,0x20,0x00,0x1F,0xE2,0x00,0x01,0x7F,0xFE,0x00,0x00,0x00,0x00,

"量", 0x04,0x00,0x04,0x01,0x04,0x01,0x7D,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,
      0x55,0x55,0x55,0x55,0x55,0x55,0xFD,0xF5,0x44,0x01,0x0C,0x01,0x04,0x00,0x00,0x00,
			
"Ω", 0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x9C,0x1F,0xCC,0x30,0xEC,0x60,0x6C,0x40,0x3C,
      0x40,0x00,0x40,0x3C,0x60,0x6C,0x30,0xCC,0x1F,0x8C,0x0F,0x1C,0x00,0x00,0x00,0x00
};


struct number                 // 汉字字模数据结构
{
       signed char Index;               // 汉字内码索引
       char Msk[16];                       // 点阵码数据
};

/////////////////////////////////////////////////////////////////////////
// 汉字字模表                                                          //
// 汉字库: 宋体12.dot 纵向取模下高位,数据排列:从左到右从上到下         //
/////////////////////////////////////////////////////////////////////////
struct number  num[] =          // 数据表
{

///*--  文字:  1  --*/
/////*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'1',0x00,0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,

//
///*--  文字:  2  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'2',0x00,0x70,0x08,0x08,0x08,0x08,0xF0,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,
//
///*--  文字:  3  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'3',0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x18,0x20,0x21,0x21,0x22,0x1C,0x00,
//
///*--  文字:  4  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'4',0x00,0x00,0x80,0x40,0x30,0xF8,0x00,0x00,0x00,0x06,0x05,0x24,0x24,0x3F,0x24,0x24,
//
///*--  文字:  5  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'5',0x00,0xF8,0x88,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x20,0x20,0x20,0x11,0x0E,0x00,
//
///*--  文字:  6  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'6',0x00,0xE0,0x10,0x88,0x88,0x90,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x20,0x1F,0x00,
//
///*--  文字:  7  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'7',0x00,0x18,0x08,0x08,0x88,0x68,0x18,0x00,0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x00,
//
///*--  文字:  8  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'8',0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,
//
///*--  文字:  9  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'9',0x00,0xF0,0x08,0x08,0x08,0x10,0xE0,0x00,0x00,0x01,0x12,0x22,0x22,0x11,0x0F,0x00,
/*--  文字:  0  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'0',0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

//
///*--  文字:  .  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
'.',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,
///*--  文字:  :  --*/
///*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
':',0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,

};


