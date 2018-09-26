#include "PckEmergency.h"

PckEmergency::PckEmergency(uint8_t source, uint8_t destination) : Packet(HEADERLENGTH, PT_EMERGENCY, source, destination){
	
}

PckEmergency::PckEmergency(uint8_t buffer[]) : Packet(buffer){
	
}