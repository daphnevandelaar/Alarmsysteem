#ifndef _PCKEMERGENCY_H
#define _PCKEMERGENCY_H

#include "Packet.h"

class PckEmergency : public Packet{
  public:
    PckEmergency::PckEmergency(uint8_t, uint8_t);
    PckEmergency::PckEmergency(uint8_t[]);
  protected:
  private:    
};

#endif // _PCKEMERGENCY_H