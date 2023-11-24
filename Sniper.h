#pragma once
#include "Arma.h"
class Sniper : public Arma {
	int zoomLevel;
public:
	Sniper();
	Sniper(int, int, int, int, int);
	int getzoomLevel();
	void setzoomLevel(int);
	double getFactorEspecial();
	void setFactorEspecial();
	double disparar();
	string toString();
};

