#pragma once
#include "Arma.h"
class Campo {
	Arma* arma1;
	Arma* arma2;
	int targets;
	double timeTakenArma1;
	double timeTakenArma2;
public:	
	Campo();
	Campo(int, Arma*, Arma*);
	void simulateBattle();

};

