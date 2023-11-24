#pragma once
#include "Arma.h"
class GrenadeLauncher : public Arma {
	int explosionRadius;
public:
	GrenadeLauncher();
	GrenadeLauncher(int, int, int, int, int);
	int getExplosionRadius();
	void setExplosionRadius(int);
	double getFactorEspecial();
	void setFactorEspecial();
	double disparar();
	string toString();
};

