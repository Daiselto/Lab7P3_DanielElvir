#pragma once
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class VectorArmas {
	vector<T*> weapons;
public:
    ~VectorArmas();
    void agregar(T*);
	Arma* obtener(int);
	void eliminar(int);
	int cuantosHay();
	void imprimir();
    void imprimirConEficiencia();
    void modificar(T*,int);
};

template<typename T>
inline VectorArmas<T>::~VectorArmas() {
    for (T* arma : weapons) {
        delete arma;
    }
    weapons.clear();
}

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
    int index = i - 1; 
    if (index >= 0 && index < weapons.size()) {
        delete weapons[index]; 
        weapons.erase(weapons.begin() + index);
        cout << "Eliminado exitosamente" << endl;
    }
    else {
        std::cout << "Número de arma no válido. No se pudo eliminar el arma." << std::endl;
    }
}


template<typename T>
inline int VectorArmas<T>::cuantosHay() {
	return weapons.size();
}

template<typename T>
inline void VectorArmas<T>::imprimir() {
    int cont = 0;
    for (T* arma : weapons) {
        Sniper* sniper = dynamic_cast<Sniper*>(arma);
        ScarRifle* scarRifle = dynamic_cast<ScarRifle*>(arma);
        Shotgun* shotgun = dynamic_cast<Shotgun*>(arma);
        GrenadeLauncher* granadas = dynamic_cast<GrenadeLauncher*>(arma);
            if (sniper != nullptr) {
                cout << ++cont << "- ";
                cout << sniper->toString() << endl;
                cout << "------------------------" << endl;
            }
        
            if (scarRifle != nullptr) {
                cout << ++cont << "- ";
                cout << scarRifle->toString() << endl;
                cout << "------------------------" << endl;
            }
            
            if (shotgun != nullptr) {
                cout << ++cont << "- ";
                cout << shotgun->toString() << endl;
                cout << "------------------------" << endl;
            }
            
            if (granadas != nullptr) {
                cout << ++cont << "- ";
                cout << granadas->toString() << endl;
                cout << "------------------------" << endl;
            }
    }
}

template<typename T>
inline void VectorArmas<T>::imprimirConEficiencia() {
    int cont = 0;
    for (T* arma : weapons) {
        Sniper* sniper = dynamic_cast<Sniper*>(arma);
        ScarRifle* scarRifle = dynamic_cast<ScarRifle*>(arma);
        Shotgun* shotgun = dynamic_cast<Shotgun*>(arma);
        GrenadeLauncher* granadas = dynamic_cast<GrenadeLauncher*>(arma);
        if (sniper != nullptr) {
            cout << ++cont << "- ";
            cout << "Sniper (Eficiencia: " << sniper->disparar() << ")" << endl;            
        }

        if (scarRifle != nullptr) {
            cout << ++cont << "- ";
            cout << "ScarRifle (Eficiencia: " << scarRifle->disparar() << ")" << endl;            
        }

        if (shotgun != nullptr) {
            cout << ++cont << "- ";
            cout << "Shotgun (Eficiencia: " << shotgun->disparar() << ")" << endl;            
        }

        if (granadas != nullptr) {
            cout << ++cont << "- ";
            cout << "GrenadeLauncher (Eficiencia: " << granadas->disparar() << ")" << endl;            
        }
    }
    
}

template<typename T>
inline void VectorArmas<T>::modificar(T* xd, int i) {
    weapons[i] = xd;
}

