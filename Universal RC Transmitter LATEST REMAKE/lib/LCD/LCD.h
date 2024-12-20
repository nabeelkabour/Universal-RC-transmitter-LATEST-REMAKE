#ifndef LCD_H
#define LCD_H

#include <LiquidCrystal_I2C.h>

#define LCD_WIDTH 20
#define LCD_HEIGHT 4

namespace LCD
{
    extern LiquidCrystal_I2C lcd;

    void setup();
}

#endif