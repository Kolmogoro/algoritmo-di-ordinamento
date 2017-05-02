#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/*Dada una variable 'x' podemos hallar su dirrecion en memorio usando '&x'
y dado un puntero 'p' podemos hallar su valor en memoria '*p' */

/* intercambia los valores de las posiciones de memoria pasadas, modifica los valores */
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    }

/* intercambia la direccion de los punteros, modifica los punteros */
void swap1(int *a, int *b){
    int *p = b;
    b = a;
    a = p;
}

/* muestra una lista */
void mostrar(int lista[], int longitud){
    printf("[ %d", lista[0]);
    int i = 1;
    while(i<longitud){
        printf(", %d ", lista[i]);
        i++;
    }
    printf("] \n");
}

/* Muestra si la lista esta ordenada */
int ordenado(int lista[], int longitud){
    int i = 0;
    while(i<longitud){
        if(lista[i+1]<lista[i]){
            return 1;
        }
        i++;
    }
    return 0;
}


/* Las funciones que siguen, reciben un puntero como parametro, si trabajas con vectores le pasas directamente el vector*/

/*Cambia los valores de los idices de lugar */
void swapList(int *lista, int a, int b){
    int *p = &lista[a];
    int *r = &lista[b];
    swap(p,r);
}


/*Ordena por el metodo burbuja */
void burbuja(int *lista, int longitud){
    while(ordenado(lista,longitud)==1){
        int j = 0;
        while(j<longitud){
            if(lista[j+1]<lista[j]){
                swapList(lista,j+1,j);
            }
            j++;
        }
    }
}



