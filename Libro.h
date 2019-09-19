//
// Created by ALONSO on 19/09/2019.
//

#ifndef AGREGACION_Y_POLIMORFISMO_LIBRO_H
#define AGREGACION_Y_POLIMORFISMO_LIBRO_H

class Libro : public Volumen {
private:
    int numLibros;

public:
    Libro(const string &nombre, int numVol, int numLibros);

    void mostrar() override;

    virtual ~Libro();
};


#endif //AGREGACION_Y_POLIMORFISMO_LIBRO_H
