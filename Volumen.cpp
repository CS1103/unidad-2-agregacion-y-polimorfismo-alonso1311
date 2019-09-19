//
// Created by ALONSO on 19/09/2019.
//

#include "Volumen.h"

Volumen::Volumen() : nombre{""}, numVol{0} {}

Volumen::Volumen(const string &nombre, int numVol) : nombre(nombre), numVol(numVol) {}

Volumen::~Volumen() {

}

void Volumen::mostrar() {
    cout << "\tNombre: " << nombre << "\n\tN° volumen: " << numVol << endl;
}

int Volumen::getCantidad() {
    return 0;
}
