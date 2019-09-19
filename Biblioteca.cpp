//
// Created by ALONSO on 19/09/2019.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca() : maxLibros{0}, maxRevistas{0} {
    vol = new vector<Volumen>;
}

void Biblioteca::incluir(Volumen v) {
    vol->push_back(v);
}

void Biblioteca::mostrarBiblioteca() {
    for (auto item : *vol){
        item.mostrar();
        if(typeid(item) == typeid(Libro))
            maxLibros = maxLibros + item.getCantidad();
        else
            maxRevistas = maxRevistas + item.getCantidad();
    }
    cout << endl << "La cantidad de libros es: " << maxLibros << endl;
    cout << "La cantidad de revistas es: " << maxRevistas << endl;
}

Biblioteca::~Biblioteca() {
    delete vol;
}


