#ifndef DATA_H
#define DATA_H

#include <Arduino.h>

struct ChannelData
{
  int16_t ch1;
  int16_t ch2;
  int16_t ch3;
  int16_t ch4;
  int16_t ch5;
  int16_t ch6;
  int16_t ch7;
  int16_t ch8;

  //Still transmit for modularity/consistency
  int16_t ch9;
  int16_t ch10;
  int16_t ch11;
  int16_t ch12;
};

extern ChannelData txData;

namespace Data
{
  void reset();
}

#endif
