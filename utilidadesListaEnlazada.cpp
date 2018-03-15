//
// Created by WilliamPC on 15/3/2018.
//

#include <iostream>
#include <fstream>
#include "stdlib.h"
#include "utilidadesListaEnlazada.h"
using namespace std;

void insertarFinal(utilidadesListaEnlazada **inicio , int v ){
    utilidadesListaEnlazada *nuevo;
    nuevo->valor=v;

    if(*inicio==0){
        *inicio=nuevo;
    }else {
        utilidadesListaEnlazada* actual= *inicio;
        utilidadesListaEnlazada* anterior=0;
        while (actual!=0){
            anterior=actual;
            actual = actual->sig;
        }
        anterior->sig=nuevo;
    }
}
utilidadesListaEnlazada crearLista(int t){
    utilidadesListaEnlazada *nuevaLista;
    int cont=0, num;
    while(cont<=t){
        num=rand()%(50);//random entre numeros de 1 a 50
        nuevaLista->valor=num;
        insertarFinal(&nuevaLista,num);

    }
    return *nuevaLista;
}

void guardarLista(utilidadesListaEnlazada ** lista, char * nombre){
    ofstream archivoGuardar(nombre,ios::out| ios::app | ios::binary);
    if(!archivoGuardar){
        cout<<"Error al intentar abrir el archivo"<< nombre <<endl;
        return;
    }
    int v=0;
    if(*lista >0 ){
        utilidadesListaEnlazada *l=*lista;
        v=l->valor;
        archivoGuardar<<v<<" ";
        guardarLista(&(*lista)->sig, nombre);

    }else{
        return;
    }
}