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
	~Arma();
	virtual double disparar()=0;
	virtual double getFactorEspecial()=0;
	virtual void setFactorEspecial()=0;
	int getDamage();
	void setDamage(int);
	int getRange();
	void setRange(int);
	int getRateOfFire();
	void setRateOfFire(int);
	int getAmmoCapacity();
	void setAmmoCapacity(int);
	virtual string toString()=0;
};

