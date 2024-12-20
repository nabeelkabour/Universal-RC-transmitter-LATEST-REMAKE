#include <Pins.h>
#include "Storage.h"

void Storage::setup()
{
    //light up LED

    if(!SD.begin(PIN_SDCS))
    {
        //handle failure
    }
    
    //turn off LED
}