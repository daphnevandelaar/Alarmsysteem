#ifndef _PCKIMSTILLALIVE_H
#define _PCKIMSTILLALIVE_H

#include "Packet.h"

class PckImStillAlive : public Packet{
  public:
    uint8_t mBatteryLevel;

    PckImStillAlive(uint8_t, uint8_t, uint8_t);
    PckImStillAlive(uint8_t[]);
  protected:
  private:    
};

#endif // _PCKIMSTILLALIVE_H