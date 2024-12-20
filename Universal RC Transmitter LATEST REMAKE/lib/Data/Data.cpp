#include <Data.h>

ChannelData txData;

void Data::reset()
{
    //Left stick
    txData.ch1 = 1500; 
    txData.ch2 = 1500;
    txData.ch3 = 1000;

    //Right stick
    txData.ch4 = 1500;
    txData.ch5 = 1500;
    txData.ch6 = 1000;

    //Calipers
    // txData.ch7 = 1500;
    // txData.ch8 = 1500;    
}