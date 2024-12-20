#include <Arduino.h>
#include <SPI.h>
#include <Pins.h>
#include <LCD.h>
#include <MenuInput.h>
#include <Radio.h>
#include <ChannelInput.h>
#include <Data.h>
//#include <Storage.h>
#include <UI.h>

void setup() 
{
    Pins::setup();
    //Storage::setup();
    LCD::setup();
    //Radio::setup();
    
    //Serial.begin(9600);
}

void loop()
{
    //Handle Menu
    //Input::update();
    

    //Handle controls
    //Radio::sendControlPacket();
}