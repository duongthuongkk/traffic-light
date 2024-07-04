#ifndef __LCD16x2_
#define __LCD16x2_
#include "main.h"
#define LCD_RS GPIO_PIN_12
#define LCD_EN GPIO_PIN_15
#define D4 		 GPIO_PIN_8
#define D5 		 GPIO_PIN_9
#define D6 		 GPIO_PIN_10
#define D7 		 GPIO_PIN_11
void LCD_Enable(void);
void LCD_Send4bit(unsigned char data);
void LCD_SendCommand(unsigned cmd);
void LCD_Clear();
void LCD_Init();
void LCD_Gotoxy(unsigned char x, unsigned char y);
void LCD_PutChar(unsigned char text);
void LCD_WriteString(char*s);
#endif