#include <Arduino.h>
#include <LCD.h>

LiquidCrystal_I2C LCD::lcd(0x27, LCD_WIDTH, LCD_HEIGHT);

void LCD::setup()
{
    lcd.init();
    lcd.backlight();

    lcd.setCursor(0, 0);
    lcd.print("NK");
    delay(1000);
}