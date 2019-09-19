//
// Created by ALONSO on 19/09/2019.
//

#ifndef AGREGACION_Y_POLIMORFISMO_REVISTA_H
#define AGREGACION_Y_POLIMORFISMO_REVISTA_H


class Revista : public Volumen {
private:
    int numRevistas;

public:
    Revista(const string &nombre, int numVol, int numRevistas);

    void mostrar() override ;

    virtual ~Revista();
};


#endif //AGREGACION_Y_POLIMORFISMO_REVISTA_H
