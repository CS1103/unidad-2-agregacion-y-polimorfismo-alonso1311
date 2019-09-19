//
// Created by ALONSO on 19/09/2019.
//

#ifndef AGREGACION_Y_POLIMORFISMO_VOLUMEN_H
#define AGREGACION_Y_POLIMORFISMO_VOLUMEN_H


#include "Definiciones.h"

class Volumen {
protected:
    string nombre;
    int numVol;

public:
    Volumen();
    Volumen(const string &nombre, int numVol);

    virtual void mostrar();

    virtual int getCantidad();

    virtual ~Volumen();
};


#endif //AGREGACION_Y_POLIMORFISMO_VOLUMEN_H
