#ifndef _CHARACTER
#define _CHARACTER
/*****************************预定义**************************************/
#define uchar unsigned char 
#define uint  unsigned int
/********************************************************************************************
*内容:   0 1 2 3 4 5 6 7 8 9 空白 -	 T :
*大小:   8X16字符  
*********************************************************************************************/
uchar code letter_logo[16][16]={
/*--  文字:  0  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

/*--  文字:  1  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  文字:  2  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,

/*--  文字:  3  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  4  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,

/*--  文字:  5  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  6  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,

/*--  文字:  7  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,

/*--  文字:  8  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,

/*--  文字:  9  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00,

/*--  文字:  :  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,

/*--  文字:  -  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

/*--  文字:  T  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/

0x00,0x1C,0x0C,0xFC,0xFC,0x0C,0x1C,0x00,0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00,

/*--  文字: 空白  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


/*--  文字: (  --*/
0x00,0x00,0xF0,0xF8,0x0C,0x04,0x00,0x00,0x00,0x00,0x03,0x07,0x0C,0x08,0x00,0x00,

/*--  文字: )  --*/

0x00,0x00,0x04,0x0C,0xF8,0xF0,0x00,0x00,0x00,0x00,0x08,0x0C,0x07,0x03,0x00,0x00,


};

/*******************************************************************************
* 内容 年月日
* 大小 16X16
*********************************************************************************/
uchar code data_logo[3][32] = {
/*--  文字:  年  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x40,0x20,0x10,0x0C,0xE3,0x22,0x22,0x22,0xFE,0x22,0x22,0x22,0x22,0x02,0x00,0x00,
0x04,0x04,0x04,0x04,0x07,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x04,0x00,

/*--  文字:  月  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0x00,0x00,0xFF,0x11,0x11,0x11,0x11,0x11,0xFF,0x00,0x00,0x00,0x00,
0x00,0x40,0x20,0x10,0x0C,0x03,0x01,0x01,0x01,0x21,0x41,0x3F,0x00,0x00,0x00,0x00,

/*--  文字:  日  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x3F,0x00,0x00,0x00,0x00,
};


/*******************************************************************************
* 内容 时分秒
* 大小 16X16
*********************************************************************************/
uchar code time_logo[3][32] = {
/*--  文字:  时  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xFC,0x44,0x44,0x44,0xFC,0x10,0x90,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,
0x00,0x07,0x04,0x04,0x04,0x07,0x00,0x00,0x03,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,

/*--  文字:  分  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x80,0x40,0x20,0x98,0x87,0x82,0x80,0x80,0x83,0x84,0x98,0x30,0x60,0xC0,0x40,0x00,
0x00,0x80,0x40,0x20,0x10,0x0F,0x00,0x00,0x20,0x40,0x3F,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  秒  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x12,0x12,0xD2,0xFE,0x91,0x11,0xC0,0x38,0x10,0x00,0xFF,0x00,0x08,0x10,0x60,0x00,
0x04,0x03,0x00,0xFF,0x00,0x83,0x80,0x40,0x40,0x20,0x23,0x10,0x08,0x04,0x03,0x00,
};

/*********************************************************************************
* 内容: 日一二三四五六星期 
* 大小: 16X16
/********************************************************************************/
uchar code week_logo[9][32] = { 
/*--  文字:  日  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x3F,0x00,0x00,0x00,0x00,

/*--  文字:  一  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  二  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x06,0x04,0x00,0x00,0x00,
0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x18,0x10,0x00,

/*--  文字:  三  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x04,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x04,0x00,0x00,
0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,

/*--  文字:  四  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xFE,0x02,0x02,0x02,0xFE,0x02,0x02,0xFE,0x02,0x02,0x02,0x02,0xFE,0x00,0x00,
0x00,0x7F,0x28,0x24,0x23,0x20,0x20,0x20,0x21,0x22,0x22,0x22,0x22,0x7F,0x00,0x00,

/*--  文字:  五  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x02,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0xC2,0x82,0x02,0x00,0x00,0x00,
0x20,0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x30,0x20,0x00,

/*--  文字:  六  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x10,0x10,0x10,0x10,0x10,0x91,0x12,0x1E,0x94,0x10,0x10,0x10,0x10,0x10,0x10,0x00,
0x00,0x40,0x20,0x10,0x0C,0x03,0x01,0x00,0x00,0x01,0x02,0x0C,0x78,0x30,0x00,0x00,

/*--  文字:  星  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0xBE,0x2A,0x2A,0x2A,0xEA,0x2A,0x2A,0x2A,0x2A,0x3E,0x00,0x00,0x00,
0x00,0x48,0x46,0x41,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0x49,0x49,0x41,0x40,0x00,

/*--  文字:  期  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x04,0xFF,0x54,0x54,0x54,0xFF,0x04,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00,0x00,
0x42,0x22,0x1B,0x02,0x02,0x0A,0x33,0x62,0x18,0x07,0x02,0x22,0x42,0x3F,0x00,0x00,
};
/*******************************************************************************************
* 内容: 农历
* 大小: 16X16
********************************************************************************************/
uchar code lunar_calendar_logo[2][32] = {
 /*--  文字:  农  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x20,0x18,0x08,0x88,0xE8,0x1F,0x6A,0x88,0x08,0x88,0xC8,0xA8,0x1C,0x08,0x00,
0x08,0x04,0x02,0x41,0xFF,0x40,0x20,0x10,0x01,0x02,0x0D,0x18,0x70,0x20,0x20,0x00,

/*--  文字:  历  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0xFE,0x02,0x22,0x22,0x22,0x22,0xFA,0x22,0x22,0x22,0xE2,0x02,0x02,0x00,
0x40,0x30,0x0F,0x00,0x40,0x20,0x18,0x06,0x01,0x00,0x20,0x60,0x3F,0x00,0x00,0x00,
};
/********************************************************************************************
*内容: .  ° C
*大小:   8X16字符
*********************************************************************************************/
uchar code temperture_logo[3][16]={
/*--  文字:  .  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  °  --*
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x18,0x24,0x24,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  C  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,
};

/********************************************************************************************
*内容:   显示温度等级   第一个等级大于30度    第二个等级大于20度小于30毒   第三个等级小于20d度 
*大小:   8X16字符
*********************************************************************************************/
uchar code sensor_inducator_logo[3][32] = 
{
/*--  调入了一幅图像：这是您新建的图像  --*/
/*--  宽度x高度=16x16  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x70,0x78,0x00,0x00,0x00,
0x00,0x00,0x00,0x40,0x60,0x70,0x74,0x76,0x77,0x77,0x77,0x77,0x77,0x00,0x00,0x00,
/*--  调入了一幅图像：这是您新建的图像  --*/
/*--  宽度x高度=16x16  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x40,0x60,0x70,0x74,0x76,0x77,0x77,0x77,0x77,0x77,0x00,0x00,0x00,
/*--  调入了一幅图像：这是您新建的图像  --*/
/*--  宽度x高度=16x16  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x40,0x60,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x00,0x00,0x00,
};

/***************************************************************************************
*内容: 时间设置 功能设置
*大小: 16X16
****************************************************************************************/
uchar code Menu_Logo[8][32] = { 
/*--  文字:  时  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xFC,0x44,0x44,0x44,0xFC,0x10,0x90,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x00,
0x00,0x07,0x04,0x04,0x04,0x07,0x00,0x00,0x03,0x20,0x40,0x3F,0x00,0x00,0x00,0x00,

/*--  文字:  间  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xF8,0x02,0x02,0x00,0xF0,0x92,0x92,0x92,0x92,0xF2,0x02,0x02,0xFE,0x00,0x00,
0x00,0x7F,0x00,0x00,0x00,0x07,0x04,0x04,0x04,0x04,0x07,0x20,0x40,0x3F,0x00,0x00,

/*--  文字:  设  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x40,0x40,0xCE,0x04,0x00,0x80,0x40,0xBE,0x82,0x82,0x82,0xBE,0xC0,0x40,0x40,0x00,
0x00,0x00,0x7F,0x20,0x10,0x00,0x40,0x43,0x2C,0x10,0x10,0x2C,0x43,0x40,0x00,0x00,

/*--  文字:  置  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x20,0x2E,0xAA,0xAA,0xAE,0xEA,0xBA,0xAA,0xAE,0xAA,0xAA,0x2E,0x20,0x00,0x00,
0x40,0x40,0x40,0x7F,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x7F,0x40,0x40,0x40,0x00,

/*--  文字:  闹  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0xF8,0x12,0x90,0x92,0x96,0xFA,0x92,0x92,0x92,0x12,0x02,0xFE,0x00,0x00,
0x00,0x00,0x7F,0x00,0x1F,0x00,0x00,0x3F,0x00,0x08,0x0F,0x20,0x40,0x7F,0x00,0x00,

/*--  文字:  钟  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x40,0x30,0x2C,0xEA,0x28,0x28,0x00,0xF8,0x08,0x08,0xFE,0x08,0x08,0xF8,0x00,0x00,
0x01,0x01,0x01,0x7F,0x41,0x21,0x00,0x01,0x01,0x01,0x7F,0x01,0x01,0x01,0x00,0x00,

/*--  文字:  设  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x40,0x40,0xCE,0x04,0x00,0x80,0x40,0xBE,0x82,0x82,0x82,0xBE,0xC0,0x40,0x40,0x00,
0x00,0x00,0x7F,0x20,0x10,0x00,0x40,0x43,0x2C,0x10,0x10,0x2C,0x43,0x40,0x00,0x00,

/*--  文字:  置  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x2E,0xAA,0xAA,0xAE,0xEA,0xBA,0xAA,0xAE,0xAA,0xAA,0x2E,0x00,0x00,0x00,
0x40,0x40,0x40,0x7F,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x7F,0x40,0x40,0x40,0x00,

};

/********************************************************************************************
*内容：日期 时间
*大小：16x16
**************************************************************************************8******/
uchar code data_time_logo[4][32] = {
/*--  文字:  日  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x3F,0x00,0x00,0x00,0x00,

/*--  文字:  期  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x04,0xFF,0x54,0x54,0x54,0xFF,0x04,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00,0x00,
0x42,0x22,0x1B,0x02,0x02,0x0A,0x33,0x62,0x18,0x07,0x02,0x22,0x42,0x3F,0x00,0x00,

/*--  文字:  时  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xFC,0x44,0x44,0x44,0xFC,0x10,0x90,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,
0x00,0x07,0x04,0x04,0x04,0x07,0x00,0x00,0x03,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,

/*--  文字:  间  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xF8,0x01,0x06,0x00,0xF0,0x92,0x92,0x92,0x92,0xF2,0x02,0x02,0xFE,0x00,0x00,
0x00,0xFF,0x00,0x00,0x00,0x07,0x04,0x04,0x04,0x04,0x07,0x40,0x80,0x7F,0x00,0x00,
};

/********************************************************************************
* 
*
*********************************************************************************/
code uchar year_code[597]={
                    0x04,0xAe,0x53,  
    //1901 0
                    0x0A,0x57,0x48,     
   //1902 3
                    0x55,0x26,0xBd, 
    //1903 6
                    0x0d,0x26,0x50,    
    //1904 9
                    0x0d,0x95,0x44,   
    //1905 12
                    0x46,0xAA,0xB9,    
    //1906 15
                    0x05,0x6A,0x4d,    
    //1907 18
                    0x09,0xAd,0x42,    
    //1908 21
                    0x24,0xAe,0xB6,    
    //1909
                    0x04,0xAe,0x4A,    
    //1910
                    0x6A,0x4d,0xBe,    
    //1911
                    0x0A,0x4d,0x52,    
    //1912
                    0x0d,0x25,0x46,    
    //1913
                    0x5d,0x52,0xBA,    
    //1914
                    0x0B,0x54,0x4e,    
    //1915
                    0x0d,0x6A,0x43,    
    //1916
                    0x29,0x6d,0x37,    
    //1917
                    0x09,0x5B,0x4B,    
    //1918
                    0x74,0x9B,0xC1,    
    //1919
                    0x04,0x97,0x54,    
    //1920
                    0x0A,0x4B,0x48,    
    //1921
                    0x5B,0x25,0xBC,    
    //1922
                    0x06,0xA5,0x50,    
    //1923
                    0x06,0xd4,0x45,    
    //1924
                    0x4A,0xdA,0xB8,    
    //1925
                    0x02,0xB6,0x4d,    
    //1926
                    0x09,0x57,0x42,    
    //1927
                    0x24,0x97,0xB7,    
    //1928
                    0x04,0x97,0x4A,    
    //1929
                    0x66,0x4B,0x3e,    
    //1930
                    0x0d,0x4A,0x51,    
    //1931
                    0x0e,0xA5,0x46,    
    //1932
                    0x56,0xd4,0xBA,    
    //1933
                    0x05,0xAd,0x4e,    
    //1934
                    0x02,0xB6,0x44,    
    //1935
                    0x39,0x37,0x38,    
    //1936
                    0x09,0x2e,0x4B,    
    //1937
                    0x7C,0x96,0xBf,    
    //1938
                    0x0C,0x95,0x53,    
    //1939
                    0x0d,0x4A,0x48,    
    //1940
                    0x6d,0xA5,0x3B,    
    //1941
                    0x0B,0x55,0x4f,    
    //1942
                    0x05,0x6A,0x45,    
    //1943
                    0x4A,0xAd,0xB9,    
    //1944
                    0x02,0x5d,0x4d,    
    //1945
                    0x09,0x2d,0x42,    
    //1946
                    0x2C,0x95,0xB6,    
    //1947
                    0x0A,0x95,0x4A,    
    //1948
                    0x7B,0x4A,0xBd,    
    //1949
                    0x06,0xCA,0x51,    
    //1950
                    0x0B,0x55,0x46,    
    //1951
                    0x55,0x5A,0xBB,    
    //1952
                    0x04,0xdA,0x4e,    
    //1953
                    0x0A,0x5B,0x43,    
    //1954
                    0x35,0x2B,0xB8,    
    //1955
                    0x05,0x2B,0x4C,    
    //1956
                    0x8A,0x95,0x3f,    
    //1957
                    0x0e,0x95,0x52,    
    //1958
                    0x06,0xAA,0x48,    
    //1959
                    0x7A,0xd5,0x3C,    
    //1960
                    0x0A,0xB5,0x4f,    
    //1961
                    0x04,0xB6,0x45,    
    //1962
                    0x4A,0x57,0x39,    
    //1963
                    0x0A,0x57,0x4d,    
    //1964
                    0x05,0x26,0x42,    
    //1965
                    0x3e,0x93,0x35,    
    //1966
                    0x0d,0x95,0x49,    
    //1967
                    0x75,0xAA,0xBe,    
    //1968
                    0x05,0x6A,0x51,    
    //1969
                    0x09,0x6d,0x46,    
    //1970
                    0x54,0xAe,0xBB,    
    //1971
                    0x04,0xAd,0x4f,    
    //1972
                    0x0A,0x4d,0x43,    
    //1973
                    0x4d,0x26,0xB7,    
    //1974
                    0x0d,0x25,0x4B,    
    //1975
                    0x8d,0x52,0xBf,    
    //1976
                    0x0B,0x54,0x52,    
    //1977
                    0x0B,0x6A,0x47,    
    //1978
                    0x69,0x6d,0x3C,    
    //1979
                    0x09,0x5B,0x50,    
    //1980
                    0x04,0x9B,0x45,    
    //1981
                    0x4A,0x4B,0xB9,    
    //1982
                    0x0A,0x4B,0x4d,    
    //1983
                    0xAB,0x25,0xC2,    
    //1984
                    0x06,0xA5,0x54,    
    //1985
                    0x06,0xd4,0x49,    
    //1986
                    0x6A,0xdA,0x3d,    
    //1987
                    0x0A,0xB6,0x51,    
    //1988
                    0x09,0x37,0x46,    
    //1989
                    0x54,0x97,0xBB,    
    //1990
                    0x04,0x97,0x4f,    
    //1991
                    0x06,0x4B,0x44,    
    //1992
                    0x36,0xA5,0x37,    
    //1993
                    0x0e,0xA5,0x4A,    
    //1994
                    0x86,0xB2,0xBf,    
    //1995
                    0x05,0xAC,0x53,    
    //1996
                    0x0A,0xB6,0x47,    
    //1997
                    0x59,0x36,0xBC,    
    //1998
                    0x09,0x2e,0x50,    
    //1999 294
                    0x0C,0x96,0x45,    
    //2000 297
                    0x4d,0x4A,0xB8,    
    //2001
                    0x0d,0x4A,0x4C,    
    //2002
                    0x0d,0xA5,0x41,    
    //2003
                    0x25,0xAA,0xB6,    
    //2004
                    0x05,0x6A,0x49,    
    //2005
                    0x7A,0xAd,0xBd,    
    //2006
                    0x02,0x5d,0x52,    
    //2007
                    0x09,0x2d,0x47,    
    //2008
                    0x5C,0x95,0xBA,    
    //2009
                    0x0A,0x95,0x4e,    
    //2010
                    0x0B,0x4A,0x43,    
    //2011
                    0x4B,0x55,0x37,    
    //2012
                    0x0A,0xd5,0x4A,    
    //2013
                    0x95,0x5A,0xBf,    
    //2014
                    0x04,0xBA,0x53,    
    //2015
                    0x0A,0x5B,0x48,    
    //2016
                    0x65,0x2B,0xBC,    
    //2017
                    0x05,0x2B,0x50,    
    //2018
                    0x0A,0x93,0x45,    
    //2019
                    0x47,0x4A,0xB9,    
    //2020
                    0x06,0xAA,0x4C,    
    //2021
                    0x0A,0xd5,0x41,    
    //2022
                    0x24,0xdA,0xB6,    
    //2023
                    0x04,0xB6,0x4A,    
    //2024
                    0x69,0x57,0x3d,    
    //2025
                    0x0A,0x4e,0x51,    
    //2026
                    0x0d,0x26,0x46,    
    //2027
                    0x5e,0x93,0x3A,    
    //2028
                    0x0d,0x53,0x4d,    
    //2029
                    0x05,0xAA,0x43,    
    //2030
                    0x36,0xB5,0x37,    
    //2031
                    0x09,0x6d,0x4B,    
    //2032
                    0xB4,0xAe,0xBf,    
    //2033
                    0x04,0xAd,0x53,    
    //2034
                    0x0A,0x4d,0x48,    
    //2035
                    0x6d,0x25,0xBC,    
    //2036
                    0x0d,0x25,0x4f,    
    //2037
                    0x0d,0x52,0x44,    
    //2038
                    0x5d,0xAA,0x38,    
    //2039
                    0x0B,0x5A,0x4C,    
    //2040
                    0x05,0x6d,0x41,    
    //2041
                    0x24,0xAd,0xB6,    
    //2042
                    0x04,0x9B,0x4A,    
    //2043
                    0x7A,0x4B,0xBe,    
    //2044
                    0x0A,0x4B,0x51,    
    //2045
                    0x0A,0xA5,0x46,    
    //2046
                    0x5B,0x52,0xBA,    
    //2047
                    0x06,0xd2,0x4e,    
    //2048
                    0x0A,0xdA,0x42,    
    //2049
                    0x35,0x5B,0x37,    
    //2050
                    0x09,0x37,0x4B,    
    //2051
                    0x84,0x97,0xC1,    
    //2052
                    0x04,0x97,0x53,    
    //2053
                    0x06,0x4B,0x48,    
    //2054
                    0x66,0xA5,0x3C,    
    //2055
                    0x0e,0xA5,0x4f,    
    //2056
                    0x06,0xB2,0x44,    
    //2057
                    0x4A,0xB6,0x38,    
    //2058
                    0x0A,0xAe,0x4C,    
    //2059
                    0x09,0x2e,0x42,    
    //2060
                    0x3C,0x97,0x35,    
    //2061
                    0x0C,0x96,0x49,    
    //2062
                    0x7d,0x4A,0xBd,    
    //2063
                    0x0d,0x4A,0x51,    
    //2064
                    0x0d,0xA5,0x45,    
    //2065
                    0x55,0xAA,0xBA,    
    //2066
                    0x05,0x6A,0x4e,    
    //2067
                    0x0A,0x6d,0x43,    
    //2068
                    0x45,0x2e,0xB7,    
    //2069
                    0x05,0x2d,0x4B,    
    //2070
                    0x8A,0x95,0xBf,    
    //2071
                    0x0A,0x95,0x53,    
    //2072
                    0x0B,0x4A,0x47,    
    //2073
                    0x6B,0x55,0x3B,    
    //2074
                    0x0A,0xd5,0x4f,    
    //2075
                    0x05,0x5A,0x45,    
    //2076
                    0x4A,0x5d,0x38,    
    //2077
                    0x0A,0x5B,0x4C,    
    //2078
                    0x05,0x2B,0x42,    
    //2079
                    0x3A,0x93,0xB6,    
    //2080
                    0x06,0x93,0x49,    
    //2081
                    0x77,0x29,0xBd,    
    //2082
                    0x06,0xAA,0x51,    
    //2083
                    0x0A,0xd5,0x46,    
    //2084
                    0x54,0xdA,0xBA,    
    //2085
                    0x04,0xB6,0x4e,    
    //2086
                    0x0A,0x57,0x43,    
    //2087
                    0x45,0x27,0x38,    
    //2088
                    0x0d,0x26,0x4A,    
    //2089
                    0x8e,0x93,0x3e,    
    //2090
                    0x0d,0x52,0x52,    
    //2091
                    0x0d,0xAA,0x47,    
    //2092
                    0x66,0xB5,0x3B,    
    //2093
                    0x05,0x6d,0x4f,    
    //2094
                    0x04,0xAe,0x45,    
    //2095
                    0x4A,0x4e,0xB9,    
    //2096
                    0x0A,0x4d,0x4C,    
    //2097
                    0x0d,0x15,0x41,    
    //2098
                    0x2d,0x92,0xB5,    
    //2099
};
/********************************************************************************
* 月份数据表
* 
********************************************************************************/
uchar code day_code1[9]={0x0,0x1f,0x3b,0x5a,0x78,0x97,0xb5,0xd4,0xf3};
uint  code day_code2[3]={0x111,0x130,0x14e};
/********************************************************************************
* 星期数据表
* 
********************************************************************************/
uchar code  table_week[12]={0,3,3,6,1,4,6,2,5,0,3,5}; 
/********************************************************************************
* 内容: //闹钟的图标
* 大小: 16 X 16
********************************************************************************/
uchar code alarm_logo[5][32] = {
0x00,0x00,0x00,0x00,0xE0,0xF8,0xFC,0xFC,0xFC,0xFC,0xF8,0xE0,0x00,0x00,0x00,0x00,
0x00,0x10,0x18,0x3E,0x3F,0x7F,0x5F,0x9F,0x9F,0x5F,0x7F,0x3F,0x3E,0x18,0x10,0x00,

/*--  文字:  小  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0xC0,0x70,0x20,0x00,0xFF,0x00,0x10,0x20,0xC0,0x80,0x00,0x00,0x00,
0x04,0x02,0x01,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x01,0x07,0x02,0x00,

/*--  文字:  时  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xFC,0x44,0x44,0x44,0xFC,0x10,0x90,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,
0x00,0x07,0x04,0x04,0x04,0x07,0x00,0x00,0x03,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,

/*--  文字:  分  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x80,0x40,0x20,0x98,0x87,0x82,0x80,0x80,0x83,0x84,0x98,0x30,0x60,0xC0,0x40,0x00,
0x00,0x80,0x40,0x20,0x10,0x0F,0x00,0x00,0x20,0x40,0x3F,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  钟  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x40,0x30,0x2C,0xEB,0x28,0x28,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00,
0x01,0x01,0x01,0xFF,0x41,0x21,0x00,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x00,0x00,
};
/********************************************************************************
* 内容: //农历初几的字符
* 大小: 16 X 16
********************************************************************************/
unsigned char code ucLunar[][32]=
{
//"初" 
0x10,0x10,0x91,0xD6,0x30,0x98,0x00,0x08, 0x08,0xF8,0x08,0x08,0x08,0xFC,0x08,0x00,
0x02,0x01,0x00,0xFF,0x01,0x82,0x40,0x20,0x18,0x07,0x40,0x80,0x40,0x3F,0x00,0x00,

/*--  文字:  一  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  二  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x06,0x04,0x00,0x00,0x00,
0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x18,0x10,0x00,

/*--  文字:  三  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x04,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x04,0x00,0x00,
0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,

/*--  文字:  四  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0xFE,0x02,0x02,0x02,0xFE,0x02,0x02,0xFE,0x02,0x02,0x02,0x02,0xFE,0x00,0x00,
0x00,0x7F,0x28,0x24,0x23,0x20,0x20,0x20,0x21,0x22,0x22,0x22,0x22,0x7F,0x00,0x00,

/*--  文字:  五  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x02,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0xC2,0x82,0x02,0x00,0x00,0x00,
0x20,0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x30,0x20,0x00,

/*--  文字:  六  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x10,0x10,0x10,0x10,0x10,0x91,0x12,0x1E,0x94,0x10,0x10,0x10,0x10,0x10,0x10,0x00,
0x00,0x40,0x20,0x10,0x0C,0x03,0x01,0x00,0x00,0x01,0x02,0x0C,0x78,0x30,0x00,0x00,

/*--  文字:  七  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x40,0x40,0x40,0x40,0x40,0x40,0xFE,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x38,0x00,0x00,

/*--  文字:  八  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0x00,0x80,0x7C,0x08,0x00,0x00,0x7E,0x84,0x00,0x00,0x00,0x00,0x00,
0x20,0x10,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x18,0x30,0x10,0x00,

/*--  文字:  九  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x10,0x10,0x10,0x10,0x90,0x7F,0x10,0x10,0x10,0xF8,0x10,0x00,0x00,0x00,0x00,
0x00,0x40,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x78,0x20,0x00,

/*--  文字:  十  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  农  --*/	 
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x20,0x18,0x08,0x88,0xE8,0x1F,0x6A,0x88,0x08,0x88,0xC8,0xA8,0x1C,0x08,0x00,
0x08,0x04,0x02,0x41,0xFF,0x40,0x20,0x10,0x01,0x02,0x0D,0x18,0x70,0x20,0x20,0x00,

/*--  文字:  历  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0xFE,0x02,0x22,0x22,0x22,0x22,0xFA,0x22,0x22,0x22,0xE2,0x02,0x02,0x00,
0x40,0x30,0x0F,0x00,0x40,0x20,0x18,0x06,0x01,0x00,0x20,0x60,0x3F,0x00,0x00,0x00,

/*--  文字:  星  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x00,0x00,0xBE,0x2A,0x2A,0x2A,0xEA,0x2A,0x2A,0x2A,0x2A,0x3E,0x00,0x00,0x00,
0x00,0x48,0x46,0x41,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0x49,0x49,0x41,0x40,0x00,

/*--  文字:  期  --*/
/*--  Times New Roman12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x04,0xFF,0x54,0x54,0x54,0xFF,0x04,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00,0x00,
0x42,0x22,0x1B,0x02,0x02,0x0A,0x33,0x62,0x18,0x07,0x02,0x22,0x42,0x3F,0x00,0x00,

//"正" 	   15
0x00,0x02,0x02,0xC2,0x02,0x02,0x02,0xFE,0x82,0x82,0x82,0xC2,0x83,0x02,0x00,0x00,
0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x60,0x40,0x00,

//"冬",	   16
0x00,0x00,0x20,0x10,0x08,0x17,0xA4,0x44,0xA4,0x94,0x0C,0x04,0x00,0x00,0x00,0x00,
0x04,0x04,0x02,0x02,0x01,0x25,0x24,0x48,0x48,0x80,0x01,0x01,0x02,0x06,0x02,0x00,

//"腊",	   17
0x00,0xFE,0x22,0x22,0xFF,0x42,0x48,0x48,0x7F,0x48,0x48,0x7F,0xC8,0x68,0x40,0x00,
0x40,0x3F,0x02,0x82,0xFF,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0xFF,0x01,0x00,0x00,

//"℃",	   18
0x00,0x06,0x09,0x09,0xE6,0xF0,0x18,0x08,0x08,0x08,0x18,0x30,0x78,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x0F,0x18,0x30,0x20,0x20,0x20,0x10,0x08,0x00,0x00,0x00,

//"廿",    19
0x20,0x20,0x20,0x20,0xFE,0x20,0x20,0x20,0x20,0x20,0xFE,0x20,0x20,0x30,0x20,0x00,
0x00,0x00,0x00,0x00,0xFF,0x40,0x40,0x40,0x40,0x40,0xFF,0x00,0x00,0x00,0x00,0x00
};
/********************************************************************************
* 内容: //生肖
* 大小: 16 X 16
********************************************************************************/
unsigned char code SX[][32] =          // 数据表
{

//"猴",
	  0x22,0x14,0x08,0xF4,0x42,0x21,0xF8,0x17,
      0xD2,0x92,0x92,0x92,0xDF,0x92,0x10,0x00,
      0x04,0x42,0x81,0x7F,0x00,0x00,0xFF,0x85,
      0x44,0x24,0x1F,0x24,0x44,0xC6,0x44,0x00,

//"鸡",
	  0x08,0x28,0x48,0x88,0x68,0x18,0x00,0xFC,
      0x06,0x15,0x44,0x84,0x7E,0x04,0x00,0x00,
      0x10,0x08,0x06,0x01,0x02,0x14,0x10,0x13,
      0x12,0x12,0x1A,0x52,0x82,0x7F,0x02,0x00,

//"狗", 
	  0x00,0x22,0x14,0x08,0xF4,0x03,0x20,0x98,
      0x8F,0x88,0xC8,0x88,0x08,0xFC,0x08,0x00,
      0x08,0x44,0x82,0x41,0x3F,0x00,0x00,0x1F,
      0x08,0x08,0x4F,0x80,0x40,0x3F,0x00,0x00,

//"猪", 
      0x40,0x22,0x14,0x08,0xF4,0x02,0x25,0xA4,
      0x64,0x3F,0x34,0x2C,0xA4,0x32,0x20,0x00,
      0x08,0x04,0x42,0x81,0x7F,0x02,0x01,0xFF,
      0x49,0x49,0x49,0x49,0xFF,0x01,0x00,0x00,

//"鼠", 
      0x00,0xBE,0x2A,0xAA,0x29,0x29,0xE0,0x22,
      0xAA,0x2A,0x2A,0xAA,0x3F,0x02,0x00,0x00,
      0x40,0x7F,0x20,0x24,0x09,0x40,0x7F,0x20,
      0x24,0x09,0x00,0x1F,0x60,0x80,0xE0,0x00,
			
			

//"牛", 
      0x00,0x40,0x30,0x0E,0x08,0x08,0x08,0xFF,
      0x08,0x08,0x08,0x0C,0x08,0x80,0x00,0x00,
      0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,
      0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

//"虎", 
      0x00,0x00,0xF8,0x48,0x48,0x48,0xF8,0x4F,
      0x4A,0x2A,0x2B,0x0A,0xA8,0x18,0x00,0x00,
      0x80,0x40,0x3F,0x80,0x40,0x3C,0x04,0x05,
      0x05,0x7F,0x85,0x81,0x81,0xE0,0x00,0x00,

//"兔", 
      0x20,0x10,0xF8,0x14,0x13,0x12,0x12,0xF2,
      0x1A,0x16,0x12,0x10,0xF8,0x10,0x00,0x00,
      0x00,0x80,0x83,0x41,0x21,0x19,0x07,0x01,
      0x3F,0x41,0x45,0x59,0x43,0x40,0x70,0x00,

//"龙", 
      0x10,0x10,0x10,0x10,0x10,0x90,0x7F,0x10,
      0xF0,0x12,0x14,0x10,0xD0,0x18,0x10,0x00,
      0x00,0x80,0x40,0x30,0x0C,0x23,0x20,0x10,
      0x3F,0x44,0x42,0x41,0x40,0x40,0x78,0x00,

//"蛇", 
      0x00,0xF0,0x10,0xFF,0x10,0xF0,0x20,0x18,
      0xC8,0x09,0x0E,0x08,0x88,0x28,0x18,0x00,
      0x20,0x67,0x22,0x1F,0x12,0x3B,0x00,0x00,
      0x3F,0x44,0x42,0x41,0x41,0x40,0x70,0x00,

//"马", 
      0x00,0x00,0x02,0x02,0xFA,0x02,0x02,0x02,
      0x02,0x02,0xFF,0x02,0x00,0x80,0x00,0x00,
      0x08,0x08,0x08,0x08,0x09,0x09,0x09,0x09,
      0x09,0x09,0x4D,0x89,0x41,0x3F,0x01,0x00,

//"羊", 
      0x00,0x08,0x88,0x88,0x89,0x8A,0x8C,0xF8,
      0x8C,0x8A,0x89,0xC8,0x8C,0x08,0x00,0x00,
      0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xFF,
      0x08,0x08,0x08,0x08,0x08,0x0C,0x08,0x00
};
/********************************************************************************
* 内容: //天干
* 大小: 16 X 16
********************************************************************************/
unsigned char code TianGan[][32] =          // 数据表
{
//"庚", 
	  0x00,0x00,0xFC,0x84,0xA4,0xA4,0xA4,0xA5,
      0xFE,0xA4,0xA4,0xA4,0xF4,0xA6,0x84,0x00,
      0x40,0x30,0x0F,0x80,0x82,0x42,0x22,0x1A,
      0x07,0x1A,0x22,0x22,0x47,0xC0,0x40,0x00,

//"辛",
      0x40,0x40,0x44,0x44,0x4C,0x74,0x45,0xC6,
      0x44,0x64,0x5C,0x46,0x44,0x60,0x40,0x00,
      0x00,0x04,0x04,0x04,0x04,0x04,0x04,0xFF,
      0x04,0x04,0x04,0x04,0x06,0x04,0x00,0x00,

//"壬",
      0x00,0x00,0x04,0x04,0x04,0x04,0x04,0xFC,
      0x04,0x02,0x02,0x03,0x02,0x80,0x00,0x00,
      0x01,0x01,0x41,0x41,0x41,0x41,0x41,0x7F,
      0x41,0x41,0x41,0x61,0x41,0x01,0x01,0x00,

//"癸", 
      0x00,0x80,0x4A,0x32,0x92,0x8A,0x86,0x80,
      0x87,0x98,0xA4,0x52,0x88,0x80,0x80,0x00,
      0x01,0x80,0x84,0x44,0x44,0x24,0x14,0x0F,
      0x14,0x14,0x24,0x66,0xC4,0x01,0x00,0x00,

//"甲", 
      0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,
      0x22,0x22,0x22,0x22,0xFF,0x02,0x00,0x00,
      0x00,0x00,0x07,0x02,0x02,0x02,0x02,0xFF,
      0x02,0x02,0x02,0x02,0x07,0x00,0x00,0x00,

//"乙", 
      0x00,0x04,0x04,0x04,0x04,0x84,0x44,0x24,
      0x14,0x0C,0x04,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x38,0x46,0x41,0x40,0x40,0x40,
      0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00,

//"丙", 
      0x04,0x04,0xC4,0x44,0x44,0x44,0x44,0xFC,
      0x44,0x44,0x44,0x44,0xE4,0x46,0x04,0x00,
      0x00,0x00,0xFF,0x00,0x10,0x08,0x04,0x03,
      0x02,0x04,0x58,0x80,0x7F,0x00,0x00,0x00,

//"丁", 
      0x00,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,
      0x04,0x04,0x04,0x04,0x06,0x04,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

//"戊", 
      0x00,0x00,0xF8,0x08,0x08,0x08,0x08,0x08,
      0x7F,0x88,0x0A,0x0C,0x08,0xC8,0x00,0x00,
      0x40,0x30,0x0F,0x00,0x00,0x00,0x40,0x40,
      0x20,0x13,0x1C,0x24,0x43,0x80,0xE0,0x00,

//"已",
      0x00,0x02,0xF2,0x42,0x42,0x42,0x42,0x42,
      0x42,0x42,0x42,0xFF,0x02,0x00,0x00,0x00,
      0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,
      0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00
};
/********************************************************************************
* 内容: //地支
* 大小: 16 X 16
********************************************************************************/
unsigned char code DiZhi[][32] =          // 数据表
{
//"申", 
      0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0xFF,
      0x88,0x88,0x88,0x88,0xFC,0x08,0x00,0x00,
      0x00,0x00,0x1F,0x08,0x08,0x08,0x08,0xFF,
      0x08,0x08,0x08,0x08,0x1F,0x00,0x00,0x00,

//"酉",
      0x02,0x02,0xF2,0x12,0x12,0xFE,0x12,0x12,
      0x12,0xFE,0x12,0x12,0xFA,0x13,0x02,0x00,
      0x00,0x00,0xFF,0x44,0x4A,0x49,0x48,0x48,
      0x48,0x4D,0x49,0x41,0xFF,0x00,0x00,0x00,

//"戌", 
      0x00,0x00,0xF8,0x08,0x08,0x88,0x08,0x08,
      0x7F,0x88,0x0A,0x0C,0x08,0xC8,0x00,0x00,
      0x40,0x30,0x0F,0x01,0x01,0x01,0x41,0x40,
      0x20,0x13,0x1C,0x24,0x43,0x80,0xE0,0x00,

//"亥", 
      0x08,0x08,0x08,0x08,0x88,0x48,0x29,0x1E,
      0x88,0x48,0x68,0x08,0x08,0x0C,0x08,0x00,
      0x00,0x80,0x90,0x51,0x49,0x25,0x23,0x11,
      0x08,0x0C,0x12,0x23,0x40,0xC0,0x00,0x00,

//"子", 
      0x80,0x80,0x82,0x82,0x82,0x82,0x82,0xE2,
      0xA2,0x92,0x8A,0x86,0x80,0xC0,0x80,0x00,
      0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

//"丑", 
      0x00,0x00,0x02,0x82,0x82,0x82,0xFE,0x82,
      0x82,0x82,0x82,0xFF,0x02,0x00,0x00,0x00,
      0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,
      0x40,0x40,0x40,0x7F,0x40,0x60,0x40,0x00,

//"寅",  
      0x10,0x0C,0xA4,0xA4,0xA4,0xA4,0xA5,0xE6,
      0xA4,0xA4,0xA4,0xB4,0xA4,0x14,0x0C,0x00,
      0x00,0x80,0x4F,0x4A,0x2A,0x2A,0x0A,0x0F,
      0x0A,0x2A,0x2A,0x4A,0x4F,0x80,0x00,0x00,

//"卯", 
	  0x00,0x00,0xFC,0x04,0x02,0x03,0xFA,0x00,
      0x00,0xFC,0x04,0x04,0x04,0xFE,0x04,0x00,
      0x00,0x40,0x47,0x24,0x22,0x12,0x0F,0x00,
      0x00,0xFF,0x02,0x04,0x08,0x07,0x00,0x00,

//"辰", 
      0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,
      0x92,0x92,0x9A,0x93,0xC2,0x80,0x00,0x00,
      0x40,0x30,0x0F,0x00,0x00,0xFF,0x40,0x23,
      0x04,0x08,0x14,0x12,0x20,0x60,0x20,0x00,

//"巳",
      0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0x42,
      0x42,0x42,0x42,0x42,0xFF,0x02,0x00,0x00,
      0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x40,
      0x40,0x40,0x40,0x40,0x40,0x40,0x70,0x00,

//"午", 
      0x00,0x40,0x20,0x18,0x07,0x04,0x04,0xFC,
      0x04,0x04,0x04,0x06,0x04,0x80,0x00,0x00,
      0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,
      0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

//"未",
      0x80,0x88,0x88,0x88,0x88,0x88,0x88,0xFF,
      0x88,0x88,0x88,0x88,0x8C,0xC8,0x80,0x00,
      0x00,0x20,0x10,0x08,0x04,0x02,0x01,0xFF,
      0x01,0x02,0x04,0x08,0x10,0x30,0x10,0x00
};



 /********************************************************************************/
#endif
