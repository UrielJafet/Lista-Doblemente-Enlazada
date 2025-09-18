#include <iostream>
#include <limits>
#include "CLista.h"
using namespace std;

int main(){

    CLista lista;
    float valor;

    cout <<"La lista esta vacia? " << (lista.isEmpty() ? "Si" : "No") << endl;

 
    for(int i = 0; i <= 2; i++){

        cout << "\nIngrese un valor al inicio: ";
        cin >> valor;
        lista.insertarInicio(valor);

        i++;
    }

    for(int i = 0; i <= 2; i++){

        cout << "\nIngrese un valor al Final: ";
        cin >> valor;
        lista.insertarFinal(valor);

        i++;
    }

    cin.get();

    cout << "\nContenido de la lista: ";
    lista.imprimir();
    cout << "Tamanio: " << lista.size() << endl;

    cout << "\nEliminando al inicio: " << lista.eliminarInicio() << endl;

    cout << "Eliminando al final: " << lista.eliminarFinal() << endl;

    cout << "\nContenido de la lista: ";
    lista.imprimir();
    cout << "Tamanio: " << lista.size() << endl;    
    
    cout << "\nEliminando todo..." << endl;
    while (!lista.isEmpty()) {
        cout << "Eliminado: " << lista.eliminarInicio() << endl;
    }    

    cout << "\nLista vacia? " << (lista.isEmpty() ? "Si" : "No") << endl;

    cout << "Fin del programa (se llama al destructor automaticamente)" << endl;

    cin.get(); 
    return 0;
}