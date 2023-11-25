#include "ScarRifle.h"

ScarRifle::ScarRifle(){
}

ScarRifle::ScarRifle(int _damage, int _range, int _rateOfFire, int _ammoCapacity, int _accuracy) 
	: Arma(_damage, _range, _rateOfFire, _ammoCapacity) {
	this->accuracy = _accuracy;
}

int ScarRifle::getAccuracy() {
	return accuracy;
}

void ScarRifle::setAccuracy(int _accuracy) {
	this->accuracy=_accuracy;
}

double ScarRifle::getFactorEspecial() {
	return this->factorEspecial;
}

void ScarRifle::setFactorEspecial() {
	this->factorEspecial = accuracy / 50;
}

double ScarRifle::disparar() {
	return (rateOfFire*damage*factorEspecial);
}

string ScarRifle::toString() {
	return "ScarRifle de precisión de: " + to_string(accuracy);
}




