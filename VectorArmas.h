#pragma once
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class VectorArmas {
	vector<T*> weapons;
public:
	void agregar(T*);
	Arma* obtener(int);
	void eliminar(int);
	int cuantosHay();
	void imprimir();
};

template<typename T>
inline void VectorArmas<T>::agregar(T* xd) {
	weapons.push_back(xd);
}

template<typename T>
inline Arma* VectorArmas<T>::obtener(int i) {
	return weapons.at(i);
}

template<typename T>
inline void VectorArmas<T>::eliminar(int i) {
	weapons.erase(i);
}

template<typename T>
inline int VectorArmas<T>::cuantosHay() {
	return weapons.size();
}

template<typename T>
inline void VectorArmas<T>::imprimir() {
    for (int i = 0; i < weapons.size(); i++) {
        T* arma = weapons.at(i);
        if (typeid(*arma) == typeid(Sniper)) {
            Sniper* sniper = dynamic_cast<Sniper*>(arma);
            if (sniper != nullptr) {
                cout << sniper->toString() << endl;
                cout << "------------------------" << endl;
            }
        }
        else if (typeid(*arma) == typeid(ScarRifle)) {
            ScarRifle* scarRifle = dynamic_cast<ScarRifle*>(arma);
            if (scarRifle != nullptr) {
                cout << scarRifle->toString() << endl;
                cout << "------------------------" << endl;
            }
        }
        else if (typeid(*arma) == typeid(Shotgun)) {
            Shotgun* shotgun = dynamic_cast<Shotgun*>(arma);
            if (shotgun != nullptr) {
                cout << shotgun->toString() << endl;
                cout << "------------------------" << endl;
            }
        }
        else if (typeid(*arma) == typeid(GrenadeLauncher)) {
            GrenadeLauncher* granadas = dynamic_cast<GrenadeLauncher*>(arma);
            if (granadas != nullptr) {
                cout << granadas->toString() << endl;
                cout << "------------------------" << endl;
            }
        }
    }
}

