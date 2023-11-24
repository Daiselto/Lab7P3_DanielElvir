#pragma once
class Arma  {
protected:
	int damage;
	int range;
	int rateOfFire;
	int ammoCapacity;
	double factorEspecial;
public:
	virtual double disparar();
};

