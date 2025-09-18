#ifndef CNODO_H
#define CNODO_H

class CNodo {
    friend class CLista; 
    public:
        // Constructor por defecto (necesario para los centinelas Inicio y Final)
        CNodo();
    private:
        CNodo(float nd);
        CNodo* pSig;
        CNodo* pAnt;
        float cont;

        // Funciones de manipulación
        void insertAdelante(float nd);
        float eliminarSig();


};
#endif // CNODO_H