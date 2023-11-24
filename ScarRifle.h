#pragma once
#include "Arma.h"
class ScarRifle : public Arma {
	int accuracy;
public:
	ScarRifle();
	ScarRifle(int, int, int, int, int);
	int getAccuracy();
	void setAccuracy(int);
	double getFactorEspecial();
	void setFactorEspecial();
	double disparar();
	string toString();
};

