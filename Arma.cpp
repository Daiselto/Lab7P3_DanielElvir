#include "Arma.h"

Arma::Arma() {
}

Arma::Arma(int _damage, int _range, int _rateOfFire, int _ammoCapacity) {
	this->damage = _damage;
	this->range = _range;
	this->rateOfFire = _rateOfFire;
	this->ammoCapacity = _ammoCapacity;
}

double Arma::disparar() {
	return 0.0;
}

double Arma::getFactorEspecial()
{
	return 0.0;
}

void Arma::setFactorEspecial() {
	factorEspecial = 0;
}

int Arma::getDamage() {
	return damage;
}

void Arma::setDamage(int _damage) {
	this->damage = _damage;
}

int Arma::getRange() {
	return this->range;
}

void Arma::setRange(int _range) {
	this->range = _range;
}

int Arma::getRateOfFire() {
	return this->rateOfFire;
}

void Arma::setRateOfFire(int _rateOfFire) {
	this->rateOfFire = _rateOfFire;
}

int Arma::getAmmoCapacity() {
	return this->ammoCapacity;
}

void Arma::setAmmoCapacity(int _ammoCapacity) {
	this->ammoCapacity = _ammoCapacity;
}

string Arma::toString() {
	return "";
}

