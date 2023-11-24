#include "Sniper.h"

Sniper::Sniper() {
}

Sniper::Sniper(int _damage, int _range, int _rateOfFire, int _ammoCapacity, int _zoomLevel) 
	: Arma(_damage, _range, _rateOfFire, _ammoCapacity) {
	this->zoomLevel = _zoomLevel;
}

int Sniper::getzoomLevel() {
	return zoomLevel;
}

void Sniper::setzoomLevel(int _zoomLevel) {
	this->zoomLevel = _zoomLevel;
}

double Sniper::getFactorEspecial() {
	return factorEspecial;
}

void Sniper::setFactorEspecial() {
	this->factorEspecial = zoomLevel / 10;
}
