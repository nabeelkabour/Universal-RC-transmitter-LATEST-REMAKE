#include <ChannelInput.h>
#include <Data.h>
#include <Pins.h>

void ChannelInput::getControls()
{
    //Left stick
    txData.ch1 = analogRead(PIN_LXJ); 
    txData.ch2 = analogRead(PIN_LYJ);
    txData.ch3 = digitalRead(PIN_LBJ);

    //Right stick
    txData.ch4 = analogRead(PIN_RXJ);
    txData.ch5 = analogRead(PIN_RYJ);
    txData.ch6 = digitalRead(PIN_RBJ);

    //Calipers
    txData.ch7 = digitalRead(PIN_LC);
    txData.ch8 = digitalRead(PIN_RC);
}