#include <Radio.h>
#include <Pins.h>
#include <ChannelInput.h>
#include <Data.h>	

RF24 radio(PIN_RCE, PIN_RCS);

uint8_t address[][6] = {"RCSYS"};

bool Radio::setup()
{
  if(!radio.begin())
  {
    //Handle failure
    return false;
  }

  radio.setAutoAck(false);
  radio.setRetries(0, 0);
  radio.setPALevel(RF24_PA_MAX);
  radio.setDataRate(RF24_250KBPS);
  radio.setPayloadSize(sizeof(txData));
  radio.stopListening();
  radio.openWritingPipe(address[0]);

  return true;
}

void Radio::sendControlPacket()
{
  ChannelInput::getControls();
  radio.write(&txData, sizeof(txData));
}