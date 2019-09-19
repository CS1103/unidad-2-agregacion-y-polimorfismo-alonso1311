#include "Definiciones.h"
#include "Volumen.cpp"
#include "Libro.cpp"
#include "Revista.cpp"
#include "Biblioteca.cpp"

int main() {
    Biblioteca* biblioteca = new Biblioteca();

    Volumen POO_II = Libro("CS", 2, 3);
    Volumen ICC = Libro("CS_I", 1, 7);
    Volumen Discretas = Libro("CS_II", 5, 2);

    Volumen Termodinamica = Revista("Mecanica", 4, 14);
    Volumen Fisica_I = Revista("Mecanica_I", 2, 12);
    Volumen Fisica_II = Revista("Mecanica_II", 6, 11);

    biblioteca->incluir(POO_II);
    biblioteca->incluir(ICC);
    biblioteca->incluir(Discretas);

    biblioteca->incluir(Termodinamica);
    biblioteca->incluir(Fisica_I);
    biblioteca->incluir(Fisica_II);

    biblioteca->mostrarBiblioteca();

    return 0;
}