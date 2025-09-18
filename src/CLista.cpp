#include "CLista.h"
#include <iostream>
using namespace std;

CLista :: CLista(){
    Inicio.pSig = &Final;
    Final.pAnt = &Inicio;
}

CLista::~CLista(){

    while(!isEmpty()){
        eliminarInicio();
    }

}

void CLista :: insertarFinal(float nd){
    Final.pAnt->insertAdelante(nd);
}

void CLista :: insertarInicio(float nd){
    Inicio.insertAdelante(nd);
}

float CLista :: eliminarInicio(){

    if(isEmpty())
    {
        cout <<"Lista vacía" << endl;
        return -1;
    }

    return Inicio.eliminarSig();
}

float CLista :: eliminarFinal(){
    
    if(isEmpty())
    {
        cout <<"Lista vacía" << endl;
        return -1;
    }

    CNodo* elim = Final.pAnt; // último nodo real
    float valor = elim->cont;

    Final.pAnt = elim->pAnt;
    elim->pAnt->pSig = &Final;

    delete elim;
    return valor;
}

int CLista :: size(){

    int cont = 0;
    CNodo* p = Inicio.pSig;

    while(p != &Final){
        cont ++;
        p = p->pSig;
    }
    
    return cont;
}

bool CLista :: isEmpty(){
    return (Inicio.pSig == &Final);
}

void CLista :: imprimir(){

    if(isEmpty())
    {
        cout <<"Lista vacía" << endl;
        return;
    }

    CNodo* p = Inicio.pSig;

    while (p != &Final){

        cout << p->cont << " ";
        p = p->pSig;

    }

    cout << endl;

}