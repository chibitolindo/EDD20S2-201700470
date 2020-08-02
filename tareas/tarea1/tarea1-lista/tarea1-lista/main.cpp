#include <iostream>
#include "lista.h"
#include "nodo_estudiante.h"
using namespace std;


int main()
{
    lista * l = new lista();
    nodo_estudiante *a, *b, *c, *d;

    a=new nodo_estudiante("Juan" , "2020");
    b=new nodo_estudiante("Maria" , "2021");
    c=new nodo_estudiante("David" , "2022");
    d=new nodo_estudiante("Fernando", "2023");

    l->add(a);
    l->add(b);
    l->add(c);
    l->add(d);
    l->imprimir();
    cout << "*****************************************" << endl ;

    l->delete_estudiante("2022");

    cout << "*****************************************" << endl ;

    l->buscarestudiante("2021");

    cout << "*****************************************" << endl ;

    l->imprimir();
    delete l;

    return 0;
}
