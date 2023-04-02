// SPDX-License-Identifier: GNU General Public License v3.0 or later


//#define USE_RGB_LCD
#define USE_MATHERTEL_LCD

#ifdef USE_RGB_LCD
#include "rgb_lcd.h"
#define LcdType rgb_lcd
#define LCD_ROWS (2)
#define LCD_COLS  (16)
#endif

#ifdef USE_MATHERTEL_LCD
#include "LiquidCrystal_PCF8574.h"
#define LcdType LiquidCrystal_PCF8574
#define LCD_ROWS  (4)
#define LCD_COLS  (20)
#endif

#if !defined LcdType
#error Must define an LCD to use
#endif

extern LcdType lcd;
extern void lcd_setup();
extern void updateDisplay(void);

extern uint8_t morsechar0[8];
extern uint8_t morsechar1[8];
extern uint8_t morsechar2[8];
extern uint8_t morsechar3[8];
extern uint8_t morsechar4[8];

extern uint8_t lcd_colourR, lcd_colourG, lcd_colourB;
extern void lcd_setcolour(void);
