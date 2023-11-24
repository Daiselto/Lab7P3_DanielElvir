#pragma once
#include "Arma.h"
class Campo {
	Arma arma1;
	Arma arma2;
	int targets;
	int timeTakenArma1;
	int timeTakenArma2;
public:
	void simulateBattle();
};

