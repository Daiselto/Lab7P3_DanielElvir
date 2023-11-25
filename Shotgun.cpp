#include "Shotgun.h"

Shotgun::Shotgun() {
}

Shotgun::Shotgun(int _damage, int _range, int _rateOfFire, int _ammoCapacity, int _spread) 
	: Arma(_damage, _range, _rateOfFire, _ammoCapacity) {
	this->spread=_spread;
}

int Shotgun::getSpread() {
	return spread;
}

void Shotgun::setSpread(int _spread) {
	this->spread = _spread;
}

double Shotgun::getFactorEspecial() {
	return factorEspecial;
}

void Shotgun::setFactorEspecial() {
	this->factorEspecial = 1 / spread;
}

double Shotgun::disparar() {
	return (rateOfFire * damage * factorEspecial);
}

string Shotgun::toString() {
	return "Shotgun con dispersión de: "+ to_string(spread);
}
