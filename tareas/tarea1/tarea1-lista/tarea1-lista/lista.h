#ifndef LISTA_H
#define LISTA_H
#include "nodo_estudiante.h"
#include <iostream>
using namespace std;

class lista
{
public:
    lista();
    ~lista();
    void add(nodo_estudiante* nuevo);
    int get_size();
    void delete_estudiante (int i);
    nodo_estudiante* get_estudiante();
private:
    nodo_estudiante* head;
    nodo_estudiante* tail;
    int size;
};

#endif // LISTA_H
