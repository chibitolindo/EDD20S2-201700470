#include "nodo_estudiante.h"

nodo_estudiante::nodo_estudiante(string nombre, string carnet)
{
    this->nombre = nombre;
    this->carnet = carnet;
    this->siguiente = NULL;
}

nodo_estudiante::~nodo_estudiante(){
    cout<<"Nodo borrado"<<endl;
}

string nodo_estudiante::getnombre(){
        return this->nombre;
}

string nodo_estudiante::getcarnet(){
    return this->carnet;
}

nodo_estudiante* nodo_estudiante::getsiguiente(){
    return this->siguiente;
}

void nodo_estudiante::setsiguiente(nodo_estudiante *n){
    this->siguiente=n;
}

void nodo_estudiante::imprimir(){
    cout<<"Nombre: " << this->nombre << "\nCarnet: " << this->carnet << endl;
}
