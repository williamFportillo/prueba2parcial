//
// Created by WilliamPC on 15/3/2018.
//

#ifndef PRUEBA2PARCIAL_UTILIDADESLISTAENLAZADA_H
#define PRUEBA2PARCIAL_UTILIDADESLISTAENLAZADA_H
struct utilidadesListaEnlazada {
public:
    int valor, tam;
    utilidadesListaEnlazada *sig;
    utilidadesListaEnlazada *ant;

    utilidadesListaEnlazada(){
        sig=0;
        ant=0;
    }
};
static void insertarFinal(utilidadesListaEnlazada** , int);
static utilidadesListaEnlazada crearLista(int);
static void ordenarLista(utilidadesListaEnlazada **);
static void guardarLista(utilidadesListaEnlazada * , char *);
#endif //PRUEBA2PARCIAL_UTILIDADESLISTAENLAZADA_H
