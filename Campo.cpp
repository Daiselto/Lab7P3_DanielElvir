#include "Campo.h"
#include <iostream>

Campo::Campo()
{
}

Campo::Campo(int _targets, Arma* _a1, Arma* _a2) {
	this->targets = _targets;
	this->arma1 = _a1;
	this->arma2 = _a2;
}

void Campo::simulateBattle() {
	this->timeTakenArma1 = targets / arma1->disparar();
	this->timeTakenArma2 = targets / arma2->disparar();
	cout << "---- CAMPO DE TIRO - Resultados de la simulación ----" << endl;
	cout << endl;
	cout << "timetaken Arma 1: " << this->timeTakenArma1 << endl;
	cout << "timetaken Arma 2: " << this->timeTakenArma2 << endl;
	cout << endl;
	if (timeTakenArma1>timeTakenArma2) {
		cout << "El ganador es el arma 1" << endl;
	}
	else if(timeTakenArma2 > timeTakenArma1) {
		cout << "El ganador es el arma 2" << endl;
	}
	else {
		cout << "Es empate" << endl;
	}
}
