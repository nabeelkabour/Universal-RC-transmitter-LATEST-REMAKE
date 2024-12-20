#ifndef PINS_H 
#define PINS_H

#include <Arduino.h>

#define PIN_LXJ A6
#define PIN_LYJ A7
#define PIN_LBJ A3

#define PIN_RXJ A2
#define PIN_RYJ A1
#define PIN_RBJ A0

#define PIN_LC 6
#define PIN_RC 5

#define PIN_RCE 7 
#define PIN_RCS 8

#define PIN_ENC1 3
#define PIN_ENC0 2
#define PIN_ENCB 9

#define PIN_BB 4

#define PIN_SDCS 10

//LCD pins A4 and A5
//SPI pins 11, 12, 13 for both nrf24 and sd

namespace Pins
{
    void setup();
}

#endif