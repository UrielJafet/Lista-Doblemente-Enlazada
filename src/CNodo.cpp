#include "CNodo.h"

CNodo::CNodo(){
    cont = 0;
    pSig = nullptr;
    pAnt = nullptr;
}

CNodo :: CNodo(float nd){
    cont = nd;
    pSig = nullptr;
    pAnt = nullptr; 

}

float CNodo :: eliminarSig(){
    if (this->pSig == nullptr) {
        return -1;
    }
    
    CNodo* nodoAEliminar = this->pSig;
    float f = nodoAEliminar->cont;
    
    this->pSig = nodoAEliminar->pSig;
    
    if (nodoAEliminar->pSig != nullptr) {
        nodoAEliminar->pSig->pAnt = this;
    }
    
    delete nodoAEliminar;
    return f;
}

void CNodo :: insertAdelante(float nd){
    CNodo* nuevo = new CNodo(nd);

    nuevo->pSig = this->pSig;
    nuevo->pAnt = this;

    if(this->pSig != nullptr){
        this->pSig->pAnt = nuevo;
    }

    this->pSig = nuevo;
}