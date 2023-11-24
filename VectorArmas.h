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
		cout << "Arma " << i + 1 << ":" << endl;
		cout << weapons.at(i)->toString() << endl; 
		cout << "------------------------" << endl;
	}
}

