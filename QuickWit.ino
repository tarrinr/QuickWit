#include "QW.h"

void setup() {

	randomSeed(analogRead(A5));

}

void loop() {

	Game game;

	game.start();
	game.setRounds();
	game.play();

}