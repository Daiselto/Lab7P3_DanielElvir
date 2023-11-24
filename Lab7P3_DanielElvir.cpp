#include <iostream>
#include"Arma.h"
#include "VectorArmas.h"
using namespace std;

static VectorArmas<Arma>* armas = new VectorArmas<Arma>;

void menu() {
    cout << "---- CAMPO DE TIRO - MENÚ ----" << endl;
    cout << "1. Agregar Arma" << endl;
    cout << "2. Modificar Arma" << endl;
    cout << "3. Eliminar Arma" << endl;
    cout << "4. Listar Arma" << endl;
    cout << "5. Simular Batalla" << endl;
    cout << "6. Salir" << endl;
}

void agregarArma() {
    int opcion;
    cout << "Que arma desea agregar?" << endl;
    cout << "1. ScarRifle" << endl;
    cout << "2. Shotgun" << endl;
    cout << "3. Sniper" << endl;
    cout << "4. Grenade Launcher" << endl;
    cout << "Escriba una opción valida" << endl;
    cin >> opcion;
    switch (opcion) {
    
    case 1:
        int damage;
        int range;
        int rateOfFire;
        int ammoCapacity;
        cout << "Ingrese el daño por disparo (Solo puede ser un valor entre 50 y 200)" << endl;
        cin >> damage;
        while (damage<50||damage>200) {
            cout << "Tiene que ser un valor entre 50 y 200" << endl;
            cin >> damage;
        }
        cout << "Ingrese el alcance del arma (Tiene que ser un valor entre 1 y 10)" << endl;
        cin >> range;
        while (range<1||range>10) {
            cout << "Tiene que ser un valor entre 1 y 10" << endl;
            cin >> range;
        }
        cout << "Ingrese la tasa de disparo del arma (Tiene que ser un valor entre 1 y 5)" << endl;
        cin >> rateOfFire;
        while (rateOfFire < 1 || rateOfFire > 5) {
            cout << "Tiene que ser un valor entre 1 y 5" << endl;
            cin >> rateOfFire;
        }
        cout << "Ingrese la capacidad de munición (Tiene que ser un valor entre 1 y 30)" << endl;
        cin >> ammoCapacity;
        while (ammoCapacity < 1 || ammoCapacity > 30) {
            cout << "Tiene que ser un valor entre 1 y 30" << endl;
            cin >> ammoCapacity;
        }
        break;

    case 2:
        int damage;
        int range;
        int rateOfFire;
        int ammoCapacity;
        cout << "Ingrese el daño por disparo (Solo puede ser un valor entre 50 y 200)" << endl;
        cin >> damage;
        while (damage < 50 || damage>200) {
            cout << "Tiene que ser un valor entre 50 y 200" << endl;
            cin >> damage;
        }
        cout << "Ingrese el alcance del arma (Tiene que ser un valor entre 1 y 10)" << endl;
        cin >> range;
        while (range < 1 || range>10) {
            cout << "Tiene que ser un valor entre 1 y 10" << endl;
            cin >> range;
        }
        cout << "Ingrese la tasa de disparo del arma (Tiene que ser un valor entre 1 y 5)" << endl;
        cin >> rateOfFire;
        while (rateOfFire < 1 || rateOfFire > 5) {
            cout << "Tiene que ser un valor entre 1 y 5" << endl;
            cin >> rateOfFire;
        }
        cout << "Ingrese la capacidad de munición (Tiene que ser un valor entre 1 y 30)" << endl;
        cin >> ammoCapacity;
        while (ammoCapacity < 1 || ammoCapacity > 30) {
            cout << "Tiene que ser un valor entre 1 y 30" << endl;
            cin >> ammoCapacity;
        }
        break;

    case 3:
        int damage;
        int range;
        int rateOfFire;
        int ammoCapacity;
        cout << "Ingrese el daño por disparo (Solo puede ser un valor entre 50 y 200)" << endl;
        cin >> damage;
        while (damage < 50 || damage>200) {
            cout << "Tiene que ser un valor entre 50 y 200" << endl;
            cin >> damage;
        }
        cout << "Ingrese el alcance del arma (Tiene que ser un valor entre 1 y 10)" << endl;
        cin >> range;
        while (range < 1 || range>10) {
            cout << "Tiene que ser un valor entre 1 y 10" << endl;
            cin >> range;
        }
        cout << "Ingrese la tasa de disparo del arma (Tiene que ser un valor entre 1 y 5)" << endl;
        cin >> rateOfFire;
        while (rateOfFire < 1 || rateOfFire > 5) {
            cout << "Tiene que ser un valor entre 1 y 5" << endl;
            cin >> rateOfFire;
        }
        cout << "Ingrese la capacidad de munición (Tiene que ser un valor entre 1 y 30)" << endl;
        cin >> ammoCapacity;
        while (ammoCapacity < 1 || ammoCapacity > 30) {
            cout << "Tiene que ser un valor entre 1 y 30" << endl;
            cin >> ammoCapacity;
        }
        break;

    case 4:
        int damage;
        int range;
        int rateOfFire;
        int ammoCapacity;
        cout << "Ingrese el daño por disparo (Solo puede ser un valor entre 50 y 200)" << endl;
        cin >> damage;
        while (damage < 50 || damage>200) {
            cout << "Tiene que ser un valor entre 50 y 200" << endl;
            cin >> damage;
        }
        cout << "Ingrese el alcance del arma (Tiene que ser un valor entre 1 y 10)" << endl;
        cin >> range;
        while (range < 1 || range>10) {
            cout << "Tiene que ser un valor entre 1 y 10" << endl;
            cin >> range;
        }
        cout << "Ingrese la tasa de disparo del arma (Tiene que ser un valor entre 1 y 5)" << endl;
        cin >> rateOfFire;
        while (rateOfFire < 1 || rateOfFire > 5) {
            cout << "Tiene que ser un valor entre 1 y 5" << endl;
            cin >> rateOfFire;
        }
        cout << "Ingrese la capacidad de munición (Tiene que ser un valor entre 1 y 30)" << endl;
        cin >> ammoCapacity;
        while (ammoCapacity < 1 || ammoCapacity > 30) {
            cout << "Tiene que ser un valor entre 1 y 30" << endl;
            cin >> ammoCapacity;
        }
        break;

    default:
        cout << "Esa no es una opción valida" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
        break;
    }
}

void modificarArma() {

}

void eliminarArma() {

}

void listarArma() {

}

void simularBatalla() {

}

int main() {
    int opcion;
    bool seguir = true;
    do
    {
        menu();
        cin >> opcion;
        switch (opcion) {

        case 1:
            agregarArma();
            break;

        case 2:
            modificarArma();
            break;

        case 3:
            eliminarArma();
            break;

        case 4:
            listarArma();
            break;

        case 5:
            simularBatalla();
            break;

        case 6:
            cout << "Gracias por usar el programa" << endl;
            cout << "Saliendo...." << endl;
            cout << endl;
            seguir = false;
            break;

        default:
            cout << "Ingrese una opción valida para continuar" << endl;
            cout << endl;
            break;
        }
    } while (seguir);
    
}

