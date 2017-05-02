#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


/* InsertaOrdenado inserta el ultimo elemento de manera ordenada en la sublista anterior
    Si la sublista principal esta ordenanda, no hace nada*/
void insertaOrdenado(int *lista, int longitud){
    int *actual = lista + longitud - 1;
    int *anterior = lista + longitud - 2;
    while((*actual)<(*anterior)){
        swap(actual,anterior);
        actual = anterior;
        anterior--;
    }
}

void insercion(int *lista, int longitud){
    int i = 2;
    while(i<=longitud){
        insertaOrdenado(lista,i);
        i++;
    }
}


/* Dada una lista, devuelve el reverso*/
void reverso(int *lista,int longitud){
    int *p = lista;
    int *u = lista + longitud - 1;
    while(p!=u){
        swap(p,u);
        p++;
        u--;
    }
}
