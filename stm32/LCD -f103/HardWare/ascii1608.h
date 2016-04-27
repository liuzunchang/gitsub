/**
  ******************************************************************************
  * @file    ascii1608.h
  * @author  Liyuepeng(Treblemoon) from ICEC-SAST of HEU
  * @version V6.0
  * @date    5-April-2013
  * @note    This file is ascii table for ssd1963_driver.c.
  ******************************************************************************
  */
#ifndef __LCD_ASCII1608_H
#define __LCD_ASCII1608_H
const u8 LCD_ascii_1608_table[95][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x18,0x18,0x00,0x00},/*"!",1*/
{0x00,0x48,0x6C,0x24,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x00,0x24,0x24,0x24,0x7F,0x12,0x12,0x12,0x7F,0x12,0x12,0x12,0x00,0x00},/*"#",3*/
{0x00,0x00,0x08,0x1C,0x2A,0x2A,0x0A,0x0C,0x18,0x28,0x28,0x2A,0x2A,0x1C,0x08,0x08},/*"$",4*/
{0x00,0x00,0x00,0x22,0x25,0x15,0x15,0x15,0x2A,0x58,0x54,0x54,0x54,0x22,0x00,0x00},/*"%",5*/
{0x00,0x00,0x00,0x0C,0x12,0x12,0x12,0x0A,0x76,0x25,0x29,0x11,0x91,0x6E,0x00,0x00},/*"&",6*/
{0x00,0x06,0x06,0x04,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00},/*"(",8*/
{0x00,0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02,0x00},/*")",9*/
{0x00,0x00,0x00,0x00,0x08,0x08,0x6B,0x1C,0x1C,0x6B,0x08,0x08,0x00,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x7F,0x08,0x08,0x08,0x08,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x04,0x03},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00},/*".",14*/
{0x00,0x00,0x80,0x40,0x40,0x20,0x20,0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x00},/*"/",15*/
{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00},/*"0",16*/
{0x00,0x00,0x00,0x08,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"1",17*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x20,0x20,0x10,0x08,0x04,0x42,0x7E,0x00,0x00},/*"2",18*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x20,0x18,0x20,0x40,0x40,0x42,0x22,0x1C,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0x20,0x30,0x28,0x24,0x24,0x22,0x22,0x7E,0x20,0x20,0x78,0x00,0x00},/*"4",20*/
{0x00,0x00,0x00,0x7E,0x02,0x02,0x02,0x1A,0x26,0x40,0x40,0x42,0x22,0x1C,0x00,0x00},/*"5",21*/
{0x00,0x00,0x00,0x38,0x24,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x24,0x18,0x00,0x00},/*"6",22*/
{0x00,0x00,0x00,0x7E,0x22,0x22,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00},/*"7",23*/	 
{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00},/*"8",24*/
{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x64,0x58,0x40,0x40,0x24,0x1C,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x04},/*";",27*/
{0x00,0x00,0x00,0x40,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x40,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02,0x00,0x00},/*">",30*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x46,0x40,0x20,0x10,0x10,0x00,0x18,0x18,0x00,0x00},/*"?",31*/
{0x00,0x00,0x00,0x1C,0x22,0x5A,0x55,0x55,0x55,0x55,0x2D,0x42,0x22,0x1C,0x00,0x00},/*"@",32*/
{0x00,0x00,0x00,0x08,0x08,0x18,0x14,0x14,0x24,0x3C,0x22,0x42,0x42,0xE7,0x00,0x00},/*"A",33*/
{0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x1E,0x22,0x42,0x42,0x42,0x22,0x1F,0x00,0x00},/*"B",34*/
{0x00,0x00,0x00,0x7C,0x42,0x42,0x01,0x01,0x01,0x01,0x01,0x42,0x22,0x1C,0x00,0x00},/*"C",35*/
{0x00,0x00,0x00,0x1F,0x22,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x22,0x1F,0x00,0x00},/*"D",36*/
{0x00,0x00,0x00,0x3F,0x42,0x12,0x12,0x1E,0x12,0x12,0x02,0x42,0x42,0x3F,0x00,0x00},/*"E",37*/
{0x00,0x00,0x00,0x3F,0x42,0x12,0x12,0x1E,0x12,0x12,0x02,0x02,0x02,0x07,0x00,0x00},/*"F",38*/
{0x00,0x00,0x00,0x3C,0x22,0x22,0x01,0x01,0x01,0x71,0x21,0x22,0x22,0x1C,0x00,0x00},/*"G",39*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"H",40*/
{0x00,0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"I",41*/
{0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x11,0x0F},/*"J",42*/
{0x00,0x00,0x00,0x77,0x22,0x12,0x0A,0x0E,0x0A,0x12,0x12,0x22,0x22,0x77,0x00,0x00},/*"K",43*/
{0x00,0x00,0x00,0x07,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x42,0x7F,0x00,0x00},/*"L",44*/
{0x00,0x00,0x00,0x77,0x36,0x36,0x36,0x36,0x2A,0x2A,0x2A,0x2A,0x2A,0x6B,0x00,0x00},/*"M",45*/
{0x00,0x00,0x00,0xE3,0x46,0x46,0x4A,0x4A,0x52,0x52,0x52,0x62,0x62,0x47,0x00,0x00},/*"N",46*/
{0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00},/*"O",47*/
{0x00,0x00,0x00,0x3F,0x42,0x42,0x42,0x42,0x3E,0x02,0x02,0x02,0x02,0x07,0x00,0x00},/*"P",48*/
{0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x4D,0x53,0x32,0x1C,0x60,0x00},/*"Q",49*/
{0x00,0x00,0x00,0x3F,0x42,0x42,0x42,0x3E,0x12,0x12,0x22,0x22,0x42,0xC7,0x00,0x00},/*"R",50*/
{0x00,0x00,0x00,0x7C,0x42,0x42,0x02,0x04,0x18,0x20,0x40,0x42,0x42,0x3E,0x00,0x00},/*"S",51*/
{0x00,0x00,0x00,0x7F,0x49,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,0x00},/*"T",52*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00},/*"U",53*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x22,0x24,0x24,0x14,0x14,0x18,0x08,0x08,0x00,0x00},/*"V",54*/
{0x00,0x00,0x00,0x6B,0x49,0x49,0x49,0x49,0x55,0x55,0x36,0x22,0x22,0x22,0x00,0x00},/*"W",55*/
{0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x18,0x18,0x18,0x24,0x24,0x42,0xE7,0x00,0x00},/*"X",56*/
{0x00,0x00,0x00,0x77,0x22,0x22,0x14,0x14,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,0x00},/*"Y",57*/
{0x00,0x00,0x00,0x7E,0x21,0x20,0x10,0x10,0x08,0x04,0x04,0x42,0x42,0x3F,0x00,0x00},/*"Z",58*/
{0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00},/*"[",59*/
{0x00,0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x08,0x10,0x10,0x20,0x20,0x20,0x40,0x40},/*"\",60*/
{0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00},/*"]",61*/
{0x00,0x38,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF},/*"_",63*/
{0x00,0x06,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x78,0x44,0x42,0x42,0xFC,0x00,0x00},/*"a",65*/
{0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x26,0x1A,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x02,0x02,0x02,0x44,0x38,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x60,0x40,0x40,0x40,0x78,0x44,0x42,0x42,0x42,0x64,0xD8,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x7E,0x02,0x02,0x42,0x3C,0x00,0x00},/*"e",69*/
{0x00,0x00,0x00,0xF0,0x88,0x08,0x08,0x7E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x22,0x22,0x1C,0x02,0x3C,0x42,0x42,0x3C},/*"g",71*/
{0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"h",72*/
{0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x22,0x1E},/*"j",74*/
{0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x72,0x12,0x0A,0x16,0x12,0x22,0x77,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x92,0x92,0x92,0x92,0x92,0xB7,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3B,0x46,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0x26,0x42,0x42,0x42,0x22,0x1E,0x02,0x07},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x44,0x42,0x42,0x42,0x44,0x78,0x40,0xE0},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x4C,0x04,0x04,0x04,0x04,0x1F,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x42,0x02,0x3C,0x40,0x42,0x3E,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x3E,0x08,0x08,0x08,0x08,0x08,0x30,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x42,0x42,0x42,0x42,0x62,0xDC,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x14,0x08,0x08,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEB,0x49,0x49,0x55,0x55,0x22,0x22,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0x24,0x18,0x18,0x18,0x24,0x6E,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x14,0x18,0x08,0x08,0x07},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x22,0x10,0x08,0x08,0x44,0x7E,0x00,0x00},/*"z",90*/
{0x00,0xC0,0x20,0x20,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x00},/*"{",91*/
{0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10},/*"|",92*/
{0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x00},/*"}",93*/
{0x0C,0x32,0xC2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};

const unsigned char gImage_baozi[2022] = { 0X00,0X01,0X7E,0X00,0X7E,0X00,
0X3A,0X40,0X00,0X00,0X00,0X00,0X01,0X86,0X08,0X20,0X00,0X02,0X00,0X03,0X07,0XFC,
0X7F,0XE8,0X7F,0XCF,0X03,0X61,0X03,0XFF,0X1F,0X78,0X32,0X0F,0X80,0X03,0XCF,0XFC,
0X7F,0XF8,0XD8,0XCF,0XC2,0X6C,0X8B,0XFF,0X9F,0XF8,0X00,0X1F,0XE0,0X01,0X87,0XFC,
0X1F,0XFD,0X4C,0XFF,0XC2,0X00,0X84,0X7F,0X03,0XF8,0X0C,0X1F,0XE0,0X00,0XE7,0XFC,
0XBF,0XF6,0X5C,0XF7,0X90,0X1F,0X30,0X73,0X07,0XF0,0X1E,0X1F,0XF8,0X00,0XDF,0XFC,
0X39,0XAE,0X67,0XD7,0X00,0X3F,0X38,0X10,0X37,0XF0,0X1F,0X87,0XF0,0X01,0X3F,0XFC,
0X38,0X02,0XC3,0X81,0X00,0XFB,0XB8,0X00,0X07,0XE0,0X0C,0X03,0XF0,0XC0,0X1F,0XFC,
0X3B,0XFE,0X1F,0X9F,0X1E,0XDB,0XB8,0X1E,0X3F,0XEC,0X2E,0X33,0XF0,0X00,0X1F,0XFC,
0X3B,0XFF,0X7F,0XBF,0XBF,0XC7,0XB8,0X3F,0X7F,0XFC,0X6E,0X7F,0XF0,0X00,0X3F,0XFC,
0X3B,0XBB,0X9F,0XBB,0XBF,0XCF,0XB8,0X39,0XF7,0XFC,0XF7,0XEF,0XFD,0X00,0X07,0XFC,
0XBB,0XBB,0X9F,0XBB,0XBF,0X9F,0XB8,0XBF,0X77,0XFE,0XFF,0X3F,0XFF,0X00,0X83,0XFC,
0X3B,0XBB,0XBF,0XBB,0XB8,0X3F,0XBA,0X39,0X77,0XFC,0XFF,0X7F,0XFE,0X00,0X03,0XFC,
0XBB,0XBB,0XFB,0XBB,0XBB,0X39,0XB8,0X3B,0XF7,0XFE,0X9C,0X7F,0XF8,0X08,0X0F,0XFC,
0XFF,0XBB,0XBF,0X9F,0X9F,0XBF,0XFF,0XDF,0XFF,0XFC,0X0D,0XFF,0XFC,0X10,0X3B,0XFC,
0X7D,0X9B,0XBF,0X8F,0X8F,0X9F,0XFF,0XCF,0X3F,0XFC,0XC5,0XEE,0XF8,0X20,0X3F,0XFC,
0X60,0X7A,0X7E,0X33,0X80,0X07,0XF4,0X00,0X67,0XFF,0XE7,0XFF,0XF8,0X1F,0X0F,0XFC,
0X00,0XF0,0X5C,0X1F,0X80,0X03,0XE2,0X10,0X07,0XFE,0XFE,0XFF,0XFE,0X1F,0X3F,0XFC,
0X1B,0X34,0X3C,0X0F,0X00,0X01,0XF1,0X72,0X0F,0XFC,0XFF,0XFF,0XFF,0X64,0XFF,0XFC,
0X77,0X64,0XFE,0X00,0X00,0X05,0XF9,0XE6,0X8B,0XFE,0XFF,0XF3,0XFE,0X7F,0XFF,0XFC,
0X7F,0X60,0XFD,0X80,0X30,0X04,0XE3,0XCD,0XBB,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XC0,0X38,0X20,0X48,0X01,0XFF,0X9F,0XFB,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFC,
0X7B,0XC8,0XCE,0X00,0X00,0X1A,0XFF,0XDE,0X47,0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,0XFC,
0XC3,0XD5,0XB2,0X00,0X00,0X0E,0XFF,0XFB,0XC5,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFC,
0X0F,0XB0,0XB0,0X00,0X01,0X20,0XFF,0XFF,0XCD,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFC,
0X63,0X69,0X60,0X00,0X03,0XC2,0XFF,0XDF,0XC3,0XFF,0XFF,0XFF,0XFF,0XFF,0XA7,0XFC,
0X1A,0X41,0X60,0X01,0XC3,0XFF,0XFF,0XFF,0XC7,0XFF,0XF7,0XFF,0XFF,0XFF,0X07,0XFC,
0X0C,0X20,0XE0,0X0F,0X9E,0X7F,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XFE,0X07,0XFC,
0X08,0X00,0XF0,0X5E,0X79,0XFF,0XFF,0XFF,0XBD,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFC,
0X38,0X00,0XFE,0XBE,0XFB,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XF7,0XFF,0XFC,0XE7,0XFC,
0X7F,0X41,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XF8,0X6F,0XFC,
0X77,0XC3,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,0XF7,0XCF,0XFF,0XF0,0X7F,0XFC,
0X6F,0XFF,0XEF,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XE7,0XFF,0XF0,0XFF,0XFC,
0X1F,0XFF,0XC7,0XFF,0XFF,0XFF,0XF8,0X03,0XF9,0XFF,0XFF,0XE3,0XFF,0XE1,0XFF,0XFC,
0X7F,0XFF,0X87,0XFF,0XFF,0XFF,0XF8,0X03,0XD7,0X7F,0XFF,0XE3,0XFF,0X83,0XFF,0XFC,
0X3F,0XFF,0X9B,0XFF,0XFF,0XFF,0XF8,0X02,0X9B,0X7F,0XBF,0XE3,0XFF,0X07,0XFF,0XFC,
0X3F,0XFE,0X40,0XFF,0XFF,0XFF,0XFC,0X04,0X42,0XFF,0XDF,0X63,0XFC,0X1F,0XFF,0XFC,
0X7F,0XF8,0X00,0X7F,0XFF,0XFF,0XF8,0X00,0X65,0XBF,0XCF,0X73,0XF8,0X3F,0XFF,0XFC,
0X47,0XFC,0X00,0X3F,0XEF,0XFF,0XF8,0X00,0X00,0X1F,0XD0,0X73,0XC0,0X7C,0XFF,0XFC,
0X7F,0XFC,0X18,0X3F,0XFF,0XFF,0XFC,0X00,0X40,0X3F,0XF0,0X33,0XC0,0X79,0XFF,0XFC,
0X7F,0XFC,0X04,0X1F,0XFF,0XFF,0XF8,0X00,0X44,0X47,0XF4,0X63,0X80,0X6F,0XFF,0XFC,
0X7F,0XF8,0X08,0X07,0XFF,0XFF,0XFC,0X00,0X08,0X1F,0XE2,0X63,0X80,0X1E,0XFF,0XFC,
0X7F,0XFE,0X04,0X03,0XFF,0XFF,0XFC,0X00,0X00,0XBF,0XC0,0X1F,0X80,0X34,0XFF,0XFC,
0X7F,0XFF,0X00,0X00,0XFF,0XFF,0XFE,0X00,0X01,0X8F,0XE0,0X23,0X80,0X03,0XFF,0XFC,
0X7F,0XFF,0X08,0X00,0X0F,0XFF,0XFE,0X00,0X02,0X0F,0X8C,0X17,0X80,0XE3,0XFF,0XFC,
0X7F,0XFF,0XEA,0X00,0X00,0XFF,0XFE,0X00,0X02,0X1F,0XE0,0X45,0XC0,0XFF,0XFF,0XFC,
0X7F,0XFF,0XF3,0X9E,0X00,0X01,0XFE,0X00,0X10,0X0B,0X60,0X0D,0XC3,0X47,0XFF,0XFC,
0X7F,0XFF,0XFE,0X1F,0XC0,0X00,0X7E,0X00,0X00,0X0E,0X20,0X0D,0XC1,0XEF,0XFF,0XFC,
0X7F,0XF0,0XFE,0X1F,0XF8,0X00,0X7F,0X00,0X00,0X0F,0X00,0X64,0XC0,0X7F,0XFF,0XFC,
0X7F,0XBF,0XE3,0X83,0X78,0X00,0X3F,0X00,0X00,0X0F,0X81,0XF6,0XE3,0X3F,0XFF,0XFC,
0X3F,0X0F,0XE0,0XFC,0X78,0X00,0X3F,0X00,0X00,0X1F,0X21,0XC5,0XE0,0X7F,0XFF,0XFC,
0X7E,0X07,0XF7,0XDF,0XD8,0X00,0X3F,0X80,0X00,0X00,0X02,0X63,0XE3,0XFF,0XFF,0XFC,
0XFD,0X87,0XFF,0X80,0XB0,0X00,0X1F,0X00,0X00,0X00,0X01,0X31,0XF1,0XFF,0XFF,0XFC,
0XFF,0X8B,0X7F,0X9C,0X00,0X00,0X1F,0X80,0X00,0X00,0X00,0XB1,0XF0,0X5F,0XFF,0XFC,
0XFC,0X58,0X3F,0XBC,0X01,0X00,0X1F,0X80,0X00,0X1D,0X80,0X19,0XF0,0XFF,0XFF,0XFC,
0XFE,0XF8,0X3F,0XD0,0X18,0X00,0X3F,0X80,0X00,0X02,0XA0,0X10,0XF1,0XFF,0XFF,0XFC,
0XFC,0XFF,0X3B,0XE0,0X08,0X00,0X3F,0XC0,0X00,0X00,0X01,0X24,0X78,0XDF,0XFF,0XFC,
0X78,0X7F,0XFF,0XF4,0X02,0X80,0X3F,0XC0,0X00,0X00,0X01,0XE2,0X78,0X9F,0XFF,0XFC,
0XFC,0X7C,0XFF,0XFF,0X1F,0X80,0X3F,0XC0,0X00,0X00,0X09,0XF1,0X7C,0X0F,0XFF,0XFC,
0XF8,0X7C,0XFF,0XFF,0XBF,0X80,0X3F,0XC0,0X00,0X00,0X00,0X70,0XFC,0X0F,0XFF,0XFC,
0XFD,0X10,0X7B,0XFF,0XFF,0XA0,0X3F,0XC0,0X00,0X00,0X00,0X9C,0X3C,0X2F,0XFF,0XFC,
0XFE,0X30,0X69,0XFF,0XF0,0X03,0X3F,0XC0,0X00,0X00,0X01,0X80,0X3E,0X7F,0XFF,0XFC,
0XFF,0XF0,0X09,0XFF,0XFD,0X83,0X3F,0XC0,0X00,0X00,0X01,0X08,0X3F,0X7F,0XFF,0XFC,
0XFF,0XF9,0XC3,0XFE,0XFF,0X80,0X3F,0X80,0X00,0X00,0X20,0X0E,0X3F,0X3F,0XFF,0XFC,
0XFF,0XFF,0XDF,0XFF,0XFC,0X80,0X7F,0XC0,0X10,0X80,0X00,0X1C,0X7F,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0X1F,0XE4,0X00,0XFF,0X80,0X00,0X00,0X00,0X0B,0X63,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFC,0X7F,0X98,0X60,0XFF,0X00,0X04,0X00,0X40,0X06,0XF1,0XFF,0XFF,0XFC,
0X3F,0XFD,0XF0,0X7F,0XC0,0X01,0XFF,0X00,0X00,0X00,0X40,0X07,0XF1,0XFF,0XFF,0XFC,
0X1F,0X79,0XF0,0XFF,0XE0,0X03,0XFF,0X00,0X00,0X0C,0X00,0X05,0XF8,0XFF,0XFF,0XFC,
0X3F,0XF7,0X71,0XFF,0XE2,0X03,0XFE,0X08,0X00,0X0E,0X40,0X06,0XF8,0XFF,0XFF,0XFC,
0XFF,0XFE,0X41,0X64,0X0F,0X03,0XF8,0X00,0X02,0X04,0X00,0X03,0XF8,0X7F,0XFF,0XFC,
0XFF,0XFF,0X81,0XFC,0X00,0X0F,0XF0,0X00,0X00,0X00,0X00,0X01,0XF0,0X7F,0XFF,0XFC,
0XFF,0XFF,0XC1,0XFC,0X0F,0X8F,0XE0,0X1F,0X00,0X00,0X00,0X01,0XB0,0X7F,0XFF,0XFC,
0XFF,0XFF,0XF0,0XF8,0X1E,0X0F,0X80,0X3E,0X00,0X00,0X00,0X0F,0X30,0X3F,0XFF,0XFC,
0X7F,0XFF,0XF3,0X0E,0X07,0X1F,0X80,0X3A,0X20,0X00,0X00,0X09,0XF2,0X3F,0XFF,0XFC,
0X7F,0XFF,0XFF,0X86,0X0F,0XBF,0X80,0X1A,0X00,0X00,0X00,0X01,0XF6,0X3F,0X7F,0XFC,
0X3F,0XFF,0XFF,0XC4,0XF3,0X3F,0X80,0X05,0XC0,0X00,0X00,0X00,0XF0,0X1D,0XFF,0XFC,
0X7F,0XFF,0XFF,0XE0,0X7F,0X7F,0X00,0X07,0XC0,0X00,0X00,0X02,0X38,0X3F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XF0,0X87,0XFF,0X00,0X01,0XF0,0X00,0X00,0X00,0X31,0X9F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XF8,0X01,0XFF,0X00,0X00,0X78,0X00,0X00,0X00,0X38,0X9F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XF9,0X00,0XFF,0X00,0X20,0X30,0X00,0X00,0X00,0X38,0X1F,0XFF,0XFC,
0X7F,0XFF,0XFF,0X86,0X01,0XFF,0X00,0X00,0X10,0X00,0X00,0X00,0X3C,0X0F,0XFF,0XFC,
0X7F,0XFF,0XFF,0X83,0X00,0XFF,0X00,0X00,0X7D,0X20,0X00,0X01,0X7C,0X1F,0XFF,0XFC,
0X7F,0XFF,0XFE,0XFE,0X80,0XFF,0X00,0X00,0XFF,0X20,0X00,0X01,0XF8,0X3F,0XFF,0XFC,
0X7F,0XFF,0X7F,0XE0,0X40,0XFF,0X80,0X03,0XFF,0X90,0X00,0X0F,0XF0,0X67,0XFF,0XFC,
0XDF,0XFF,0XFF,0XF8,0X01,0XFF,0XC0,0X03,0XFF,0XF0,0XC0,0X7F,0XF0,0X0F,0XFF,0XFC,
0XFF,0XFF,0XF1,0XFF,0X00,0XFE,0X00,0X03,0XFF,0XFF,0XE0,0XFF,0XF8,0X0F,0XFF,0XFC,
0XFF,0XFF,0X73,0XFF,0X08,0X7C,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFC,
0XFF,0XFE,0XFF,0XFF,0X04,0XFC,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0X81,0XF8,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0X80,0XF8,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0X81,0XFC,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0X80,0X3F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0X0F,0XF0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0X00,0X3F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XEF,0XEF,0XF0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0X3F,0XC0,0X78,0X00,0X00,0X1F,0XFF,0XFF,0XFE,0X03,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFE,0X0F,0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XF1,0XFF,0XFE,0X00,0X00,0X03,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XCF,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFE,0X7F,0XFF,0XFF,0XC0,0X00,0X00,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XF9,0XFF,0XFF,0X1F,0XFE,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFB,0XFF,0XF8,0X7F,0XFF,0XFF,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0XC3,0XF7,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0X9F,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFE,0X1F,0XDD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFC,0XFF,0XB3,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XE7,0XFF,0XCE,0XFF,0XFF,0XDF,0XFF,0XFF,0XE0,0X0F,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XDF,0XFF,0X99,0XF9,0XDA,0X00,0X7F,0XFF,0XC0,0X3F,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0X7F,0XFE,0X73,0XF7,0X30,0X00,0X1E,0XF6,0X00,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFD,0XFF,0XF8,0XC7,0XFF,0XE0,0X00,0X18,0XF8,0X0F,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XF3,0XFF,0XF3,0X8F,0XBF,0XD0,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0XE6,0X3F,0X7F,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0XCC,0XFF,0X7F,0X00,0X02,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0X33,0XFE,0XFF,0XE4,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFE,0X7F,0XFD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFC,0XFF,0XFB,0XFF,0XFF,0XFF,0XFF,0XD9,0XFF,0XFF,0XFF,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFB,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XDB,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X77,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
};

#endif


