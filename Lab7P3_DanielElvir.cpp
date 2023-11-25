#include <iostream>
#include "Arma.h"
#include "ScarRifle.h"
#include "Shotgun.h"
#include "Sniper.h"
#include "GrenadeLauncher.h"
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

void agregarScar() {
    int damage;
    int range;
    int rateOfFire;
    int ammoCapacity;
    int accuracy;
    cout << "Bienvenido a la opción de agregar un ScarRifle" << endl;
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
    cout << "Ingrese la precisión de la Scar (Tiene que ser un valor entre 70 y 95)" << endl;
    cin >> accuracy;
    while (accuracy < 70 || accuracy > 95) {
        cout << "Tiene que ser un valor entre 70 y 95" << endl;
        cin >> accuracy;
    }
    Arma* scar = new ScarRifle(damage, range, rateOfFire, ammoCapacity, accuracy);
    armas->agregar(scar);
}

void agregarShotgun() {
    int damage;
    int range;
    int rateOfFire;
    int ammoCapacity;
    int spread;
    cout << "Bienvenido a la opción de agregar un Shotgun" << endl;
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
    cout << "Ingresar la dispersión de la shotgun" << endl;
    cin >> spread;
    Arma* shotgun = new Shotgun(damage, range, rateOfFire, ammoCapacity, spread);
    armas->agregar(shotgun);
}

void agregarSniper() {
    int damage;
    int range;
    int rateOfFire;
    int ammoCapacity;
    int zoomLevel;
    cout << "Bienvenido a la opción de agregar un Sniper" << endl;
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
    cout << "Ingrese el nivel de Zoom de su sniper (Tiene que ser un valor entre 4 y 12)" << endl;
    cin >> zoomLevel;
    while (zoomLevel < 4 || zoomLevel > 12) {
        cout << "Tiene que ser un valor entre 4 y 12" << endl;
        cin >> zoomLevel;
    }
    Arma* sniper = new ScarRifle(damage, range, rateOfFire, ammoCapacity, zoomLevel);
    armas->agregar(sniper);
}

void agregarGrenadeLauncher() {
    int damage;
    int range;
    int rateOfFire;
    int ammoCapacity;
    int explosionRadius;
    cout << "Bienvenido a la opción de agregar un Grenade Launcher" << endl;
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
    cout << "Ingresar el radio de explosión (Tiene que ser un valor entre 3 y 10)" << endl;
    cin >> explosionRadius;
    while (explosionRadius < 3 || explosionRadius > 10) {
        cout << "Tiene que ser un valor entre 3 y 10" << endl;
        cin >> ammoCapacity;
    }
    Arma* granadas = new ScarRifle(damage, range, rateOfFire, ammoCapacity, explosionRadius);
    armas->agregar(granadas);
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
        agregarScar();
        break;

    case 2:
        agregarShotgun();
        break;

    case 3:
        agregarSniper();
        break;

    case 4:
        agregarGrenadeLauncher();
        break;

    default:
        cout << "Esa no es una opción valida" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
        break;
    }
}

void modificarArma() {
    if (armas->cuantosHay()>0) {

    } else {
        cout << "Tiene que agregar un arma primero" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
    }
}

void eliminarArma() {
    if (armas->cuantosHay() > 0) {
        int indice;
        armas->imprimir();
        cout << "Ingrese el que quiere eliminar" << endl;
        cin >> indice;
        armas->eliminar(indice);
    }
    else {
        cout << "Tiene que agregar un arma primero" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
    }
}

void listarArma() {
    if (armas->cuantosHay() > 0) {
        cout << "La lista de las armas existentes es: " << endl;
        armas->imprimir();
    }
    else {
        cout << "Tiene que agregar un arma primero" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
    }
}


void simularBatalla() {
    if (armas->cuantosHay() > 0) {
        int targets;
        cout << "Ingrese la cantidad de targets en el campo: ";
        cin >> targets;
        cout << "Seleccione dos armas para realizar la simulación" << endl;
        
    }
    else {
        cout << "Tiene que agregar un arma primero" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
    }
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
            delete armas;
            seguir = false;
            break;

        default:
            cout << "Ingrese una opción valida para continuar" << endl;
            cout << endl;
            break;
        }
    } while (seguir);
    
}

