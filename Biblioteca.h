//
// Created by ALONSO on 19/09/2019.
//

#ifndef AGREGACION_Y_POLIMORFISMO_BIBLIOTECA_H
#define AGREGACION_Y_POLIMORFISMO_BIBLIOTECA_H

#include "Definiciones.h"
#include "Volumen.h"

class Biblioteca {
private:
    int maxLibros;
    int maxRevistas;
    vector <Volumen>* vol;

public:
    Biblioteca();

    void incluir(Volumen);

    void mostrarBiblioteca();

    virtual ~Biblioteca();

};


#endif //AGREGACION_Y_POLIMORFISMO_BIBLIOTECA_H
