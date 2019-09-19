//
// Created by ALONSO on 19/09/2019.
//

#include "Revista.h"

Revista::Revista(const string &nombre, int numVol, int numRevistas) :
                Volumen(nombre, numVol), numRevistas(numRevistas) {}

void Revista::mostrar() {
    cout << "Revista: \n";
    Volumen::mostrar();
    cout << "Cantidad: " << numRevistas << endl;
}

Revista::~Revista() {

}


