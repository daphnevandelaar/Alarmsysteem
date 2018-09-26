#include "Packet.h"

Packet::Packet(uint8_t length, uint8_t type, uint8_t source, uint8_t destination){
	mLength = length;
	mData[0] = length;
	mData[1] = type;
	mData[2] = source;
	mData[3] = destination;
}

Packet::Packet(uint8_t buffer[]){
	mLength = buffer[0];
	mType = buffer[1];
	mSource = buffer[2];
	mDestination = buffer[3];
	for(int i=0;i<mLength;i++){
		mData[i] = buffer[i];
	}
}