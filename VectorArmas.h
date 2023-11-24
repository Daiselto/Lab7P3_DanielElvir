#pragma once
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class VectorArmas {
	vector<T*> weapons;
public:
	void agregar();
	void obtener();
	void eliminar();
	void imprimir();
};

template<typename T>
inline void VectorArmas<T>::agregar() {
	//weapons.push_back(T);
}

template<typename T>
inline void VectorArmas<T>::obtener() {
	
}

template<typename T>
inline void VectorArmas<T>::eliminar() {
	
}

template<typename T>
inline void VectorArmas<T>::imprimir() {
	
}
