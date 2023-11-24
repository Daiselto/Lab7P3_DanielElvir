#pragma once
#include <string>
using namespace std;
class Arma  {
protected:
	int damage;
	int range;
	int rateOfFire;
	int ammoCapacity;
	double factorEspecial;
public:
	Arma();
	Arma(int, int, int, int);
	virtual double disparar();
	virtual double getFactorEspecial();
	virtual void setFactorEspecial();
	int getDamage();
	void setDamage(int);
	int getRange();
	void setRange(int);
	int getRateOfFire();
	void setRateOfFire(int);
	int getAmmoCapacity();
	void setAmmoCapacity(int);
	virtual string toString();
};

