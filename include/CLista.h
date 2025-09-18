#ifndef CLISTA_H
#define CLISTA_H

#include <iostream>
#include "CNodo.h"

class CLista{
    private:
        CNodo Inicio;
        CNodo Final;
    public:
        CLista();
        ~CLista();

        void insertarFinal(float nd);
        void insertarInicio(float nd);
        float eliminarInicio();
        float eliminarFinal();

        int size();
        void imprimir();
        bool isEmpty();
};


#endif //CLISTA_H