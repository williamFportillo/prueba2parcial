#include <iostream>
#include <conio.h>
#include "utilidadesListaEnlazada.h"
using namespace std;
int main() {
    int opc=0;
    utilidadesListaEnlazada *nuevo = new utilidadesListaEnlazada();
    utilidadesListaEnlazada *lista = new utilidadesListaEnlazada();


  cout <<"------ BIENVENIDO ------";
    do{

        cout <<"1. Insertar Final."<<endl;
        cout <<"2. Crear Lista"<<endl;
        cout <<"3. Guardar Lista"<<endl;
        cout <<"4. Salir"<<endl;
        cout <<"Ingrese una opcion: "<<endl;
        cin >>opc;

        switch (opc){
            case 1:
            insertarFinal(&nuevo,5);
                break;
            case 2:
            *lista=crearLista(5);
                break;
            case 3:
                char nombre[20];
                cout <<"Nombre del archivo:"<<endl;
                cin >>nombre;
                guardarLista(&*lista, nombre);
                break;
        }

    }while(opc!=4);

  getch();
}