#include "GrenadeLauncher.h"

GrenadeLauncher::GrenadeLauncher() {
}

GrenadeLauncher::GrenadeLauncher(int _damage, int _range, int _rateOfFire, int _ammoCapacity, int _explosionRadius)
	: Arma(_damage, _range, _rateOfFire, _ammoCapacity) {
	this->explosionRadius = _explosionRadius;
	this->factorEspecial = 1.0 + (explosionRadius / 10.0);
}

int GrenadeLauncher::getExplosionRadius() {
	return explosionRadius;
}

void GrenadeLauncher::setExplosionRadius(int _explosionRadius) {
	this->explosionRadius = _explosionRadius;
}

double GrenadeLauncher::getFactorEspecial() {
	return this->factorEspecial;
}

void GrenadeLauncher::setFactorEspecial() {
	this->factorEspecial = 1.0 + (explosionRadius / 10.0);
}

double GrenadeLauncher::disparar() {
	return (rateOfFire * damage * factorEspecial);
}

string GrenadeLauncher::toString() {
	return "Grenade Launcher con radio de explosión de: " + to_string(explosionRadius);
}
