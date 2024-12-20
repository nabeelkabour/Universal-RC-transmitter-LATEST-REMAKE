#include <Pins.h>

void Pins::setup()
{
    //Left joystick
    pinMode(PIN_LXJ, INPUT);
    pinMode(PIN_LYJ, INPUT);
    pinMode(PIN_LBJ, INPUT);

    //Right joystick
    pinMode(PIN_RXJ, INPUT);
    pinMode(PIN_RXJ, INPUT);
    pinMode(PIN_RBJ, INPUT);

    //Calipers
    pinMode(PIN_LC, INPUT);
    pinMode(PIN_RC, INPUT);
}