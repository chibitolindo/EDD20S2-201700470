#ifndef NODO_ESTUDIANTE_H
#define NODO_ESTUDIANTE_H
#include <string.h>
#include <iostream>
using namespace std;


class nodo_estudiante
{
public:
    nodo_estudiante(string nombre, string carnet);
    ~nodo_estudiante();
    void setsiguiente(nodo_estudiante* n);
    nodo_estudiante * getsiguiente();

private:
    string nombre;
    string carnet;
    nodo_estudiante* siguiente;

};

#endif // NODO_ESTUDIANTE_H
