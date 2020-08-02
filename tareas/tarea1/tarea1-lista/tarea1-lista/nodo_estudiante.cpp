#include "nodo_estudiante.h"

nodo_estudiante::nodo_estudiante(string nombre, string carnet)
{
    this->nombre = nombre;
    this->carnet = carnet;
    this->siguiente = NULL;
}

nodo_estudiante::~nodo_estudiante(){
    count<<"Nodo borrado"<<endl;
}

nodo_estudiante* nodo_estudiante::getsiguiente(){
    return this->siguiente;
}

void nodo_estudiante::siguiente(nodo_estudiante *n){
    this->siguiente=n;
}
