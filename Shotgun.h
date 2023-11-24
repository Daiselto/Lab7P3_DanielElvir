#pragma once
#include "Arma.h"
class Shotgun : public Arma {
	int spread;
public:
	Shotgun();
	Shotgun(int, int, int, int, int);
	int getSpread();
	void setSpread(int);
	double getFactorEspecial();
	void setFactorEspecial();
	double disparar();
	string toString();
};

