#ifndef _QW_h
#define _QW_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

struct Game {

public:
	void start();
	void setRounds();
	void play();

private:
	int rounds;
	int getKey();
	char randLetter();

};

#endif

