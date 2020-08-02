#include "lista.h"

lista::lista()
{
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

lista::~lista(){
    nodo_estudiante* aux;
    nodo_estudiante* temp;
    aux=this->head;
    while (aux!=NULL) {
        temp=aux->getsiguiente();
        delete  aux;
        aux=temp;
    }
}

void lista::add(nodo_estudiante *nuevo){
    if(this->head==NULL){
        this->head = nuevo;
        this->tail = nuevo;
        this->size++;
    }else{
        this->tail->setsiguiente(nuevo);
        this->tail=nuevo;
    }
}

void lista::imprimir(){
    nodo_estudiante* aux;
    aux=this->head;
    while(aux!=NULL){
      cout<<"Nombre " << aux->getnombre() << "\nCarnet: " << aux->getcarnet() << endl;
      aux = aux->getsiguiente();
    }
}




void lista::delete_estudiante(string i){
    nodo_estudiante* aux;
    nodo_estudiante* temp;
    aux = this->head;

    if(i==this->head->getcarnet()){
        //cabeza :v
        this->head = aux->getsiguiente();
        delete aux;
        this->size--;
        return;
    }else if(i==this->tail->getcarnet()){
        //cola :'v

        while(aux->getsiguiente()!=NULL){
            temp = aux;
            aux = aux->getsiguiente();
        }
        this->tail = temp;
        this->tail->setsiguiente(NULL);
        delete aux;
        this->size--;
        return;

    }else{
        temp=aux->getsiguiente();

        if(temp!=NULL){
            while(temp!=NULL){
                if(temp->getcarnet()==i){
                    //borrar
                    aux->setsiguiente(temp->getsiguiente());
                    delete temp;
                    this->size--;
                    return;
                }else{
                    aux = aux->getsiguiente();
                    temp = temp->getsiguiente();
                }
            }
        }else{
            cout<<"No existe ese estudiante"<<endl;
        }

    }
}


void lista::buscarestudiante(string b){
    nodo_estudiante* aux;
    aux=this->head;
    while(aux!=NULL){
        if(aux->getcarnet()==b){
            aux->imprimir();
            return;
        }else{
            aux = aux->getsiguiente();
        }
    }
}





















