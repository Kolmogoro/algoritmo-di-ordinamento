#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/* Devuelve el puntero que apunta al elemento minimo de una lista */
int* minimo(int* lista, int longitud){
    int* p = lista;
    int* s = p + 1;
    int i = 1;
    while(i < longitud){
        if((*s)<(*p)){
            p = s;
        }
        s++;
        i++;
    }
    return p;
}

/*Ordena una lista por el metodo de seleccion */
void seleccion(int *lista, int longitud){
    int *m;
    int *estable = lista;
    int i = 0;
    int *sublista = lista;
    while(i < longitud){
        m = minimo(sublista+i,longitud-i);
        if((*m)!=(*estable)){
            swap(m,estable);
        }
        i++;
        estable++;
    }
}
