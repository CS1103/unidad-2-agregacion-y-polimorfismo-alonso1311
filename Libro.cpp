//
// Created by ALONSO on 19/09/2019.
//

#include "Libro.h"

Libro::Libro(const string &nombre, int numVol, int numLibros) :
            Volumen(nombre, numVol), numLibros(numLibros) {}

Libro::~Libro() {

}

void Libro::mostrar() {
    cout << "Libro: \n";
    Volumen::mostrar();
    cout << "Cantidad: " << numLibros << endl;
}

int Libro::getCantidad() {
    return numLibros;
}
