#ifndef RADIO_H
#define RADIO_H

#include <RF24.h>

extern RF24 radio;

namespace Radio
{
    bool setup();
    void sendControlPacket();
}

#endif