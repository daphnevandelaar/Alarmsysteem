#include "PckImStillAlive.h"

PckImStillAlive::PckImStillAlive(uint8_t source, uint8_t destination, uint8_t batteryLevel) : Packet(HEADERLENGTH + 1, PT_IMSTILLALIVE, source, destination){
	mData[HEADERLENGTH] = batteryLevel;
}

PckImStillAlive::PckImStillAlive(uint8_t buffer[]) : Packet(buffer){
	mBatteryLevel = buffer[HEADERLENGTH];
}