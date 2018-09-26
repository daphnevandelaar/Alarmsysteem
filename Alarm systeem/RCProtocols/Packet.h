#ifndef _PACKET_H
#define _PACKET_H

#include "Arduino.h"	// Library for Arduino functions

#define MAXPACKETLENGTH 256
#define HEADERLENGTH 4

// Packet types
#define PT_EMERGENCY 0
#define PT_IMSTILLALIVE 1

class Packet{
  public:
    uint8_t mData[MAXPACKETLENGTH];
    uint8_t mLength, mType, mSource, mDestination;

    Packet(uint8_t, uint8_t, uint8_t, uint8_t);
    Packet(uint8_t[]);
  protected:
  private:    
};

#endif // _PACKET_H