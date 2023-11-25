#include <iostream>
#include <locale>
#include "Arma.h"
#include "ScarRifle.h"
#include "Shotgun.h"
#include "Sniper.h"
#include "GrenadeLauncher.h"
#include "VectorArmas.h"
#include "Campo.h"
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
    cout << "Ingresar la dispersión de la shotgun (Debe ser entre 5 y 30)" << endl;
    cin >> spread;
    while (spread<5||spread>30) {
        cout << "Tiene que ser un valor entre 5 y 30" << endl;
        cin >> spread;
    }
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
    Arma* sniper = new Sniper(damage, range, rateOfFire, ammoCapacity, zoomLevel);
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
    Arma* granadas = new GrenadeLauncher(damage, range, rateOfFire, ammoCapacity, explosionRadius);
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
        int indice;
        int ndamage;
        int nrange;
        int nrateOfFire;        
        int nammoCapacity;
        int naccuracy;
        int nspread;
        int nzoomLevel;
        int nexplosionRadius;
        armas->imprimir();
        cout << "Ingrese el numero que desea modificar: " << endl;
        cin >> indice;
        if (indice>=1&&indice<armas->cuantosHay()) {
            Arma* tempArma = nullptr;
            tempArma = armas->obtener(indice - 1);
            ScarRifle* tempScar = nullptr;
            Sniper* tempSniper = nullptr;
            Shotgun* tempShotgun = nullptr;
            GrenadeLauncher* tempGranada = nullptr;
            tempScar = dynamic_cast<ScarRifle*>(tempArma);
            tempSniper = dynamic_cast<Sniper*>(tempArma);
            tempShotgun = dynamic_cast<Shotgun*>(tempArma);
            tempGranada = dynamic_cast<GrenadeLauncher*>(tempArma);
            
            cout << "Ingrese el daño por disparo (Solo puede ser un valor entre 50 y 200)" << endl;
            cin >> ndamage;
            while (ndamage < 50 || ndamage>200) {
                cout << "Tiene que ser un valor entre 50 y 200" << endl;
                cin >> ndamage;
            }
            tempArma->setDamage(ndamage);
            cout << "Ingrese el alcance del arma (Tiene que ser un valor entre 1 y 10)" << endl;
            cin >> nrange;
            while (nrange < 1 || nrange>10) {
                cout << "Tiene que ser un valor entre 1 y 10" << endl;
                cin >> nrange;
            }
            tempArma->setRange(nrange);
            cout << "Ingrese la tasa de disparo del arma (Tiene que ser un valor entre 1 y 5)" << endl;
            cin >> nrateOfFire;
            while (nrateOfFire < 1 || nrateOfFire > 5) {
                cout << "Tiene que ser un valor entre 1 y 5" << endl;
                cin >> nrateOfFire;
            }
            tempArma->setRateOfFire(nrateOfFire);
            cout << "Ingrese la capacidad de munición (Tiene que ser un valor entre 1 y 30)" << endl;
            cin >> nammoCapacity;
            while (nammoCapacity < 1 || nammoCapacity > 30) {
                cout << "Tiene que ser un valor entre 1 y 30" << endl;
                cin >> nammoCapacity;
            }
            tempArma->setAmmoCapacity(nammoCapacity);

            if (tempScar!=nullptr){
                cout << "Ingrese la precisión de la Scar (Tiene que ser un valor entre 70 y 95)" << endl;
                cin >> naccuracy;
                while (naccuracy < 70 || naccuracy > 95) {
                    cout << "Tiene que ser un valor entre 70 y 95" << endl;
                    cin >> naccuracy;
                }
                tempScar->setAccuracy(naccuracy);
                tempArma = tempScar;
                tempArma->setFactorEspecial();
            }
            if (tempSniper != nullptr) {
                cout << "Ingrese el nivel de Zoom de su sniper (Tiene que ser un valor entre 4 y 12)" << endl;
                cin >> nzoomLevel;
                while (nzoomLevel < 4 || nzoomLevel > 12) {
                    cout << "Tiene que ser un valor entre 4 y 12" << endl;
                    cin >> nzoomLevel;
                }
                tempSniper->setzoomLevel(nzoomLevel);
                tempArma = tempSniper;
                tempArma->setFactorEspecial();
            }
            if (tempShotgun != nullptr) {
                cout << "Ingresar la dispersión de la shotgun (Debe ser entre 5 y 30)" << endl;
                cin >> nspread;
                while (nspread < 5 || nspread>30) {
                    cout << "Tiene que ser un valor entre 5 y 30" << endl;
                    cin >> nspread;
                }
                tempShotgun->setSpread(nspread);
                tempArma = tempShotgun;
                tempArma->setFactorEspecial();
            }
            if (tempGranada != nullptr) {
                cout << "Ingresar el radio de explosión (Tiene que ser un valor entre 3 y 10)" << endl;
                cin >> nexplosionRadius;
                while (nexplosionRadius < 3 || nexplosionRadius > 10) {
                    cout << "Tiene que ser un valor entre 3 y 10" << endl;
                    cin >> nammoCapacity;
                }
                tempGranada->setAmmoCapacity(nammoCapacity);
                tempArma = tempGranada;
                tempArma->setFactorEspecial();
            }            
            cout << "Modificado exitosamente" << endl;
        }
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
    if (armas->cuantosHay() > 1) {
        int targets;
        cout << "Ingrese la cantidad de targets en el campo: (Debe ser entre 500 y 1000) ";
        cin >> targets;
        while (targets < 500 || targets > 1000) {
            cout << "Tiene que ser un valor entre 500 y 1000" << endl;
            cin >> targets;
        }
        int pos1;
        int pos2;
        cout << "Seleccione dos armas para realizar la simulación" << endl;
        armas->imprimirConEficiencia();
        cout << endl;
        cout << "Posición de Arma 1: ";
        cin >> pos1;
        cout << "Posición de Arma 2: ";
        cin >> pos2;
        Arma* a1 = armas->obtener(pos1 - 1);
        Arma* a2 = armas->obtener(pos2 - 1);
        Campo* camp = new Campo(targets, a1, a2);
        camp->simulateBattle();
        
    }
    else {
        cout << "Tiene que agregar 2 armas primero" << endl;
        cout << "Volviendo al menu principal" << endl;
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "spanish");
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

