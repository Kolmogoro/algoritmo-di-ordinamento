#include <stdio.h>
#include "funciones.h"


int main()
{
    int lista[] = {9,8,7,6,5,4,3,2,1};
    mostrar(lista,9);
    insercion(lista,9);
    mostrar(lista,9);
    printf("\n \n");
    reverso(lista,9);
    mostrar(lista,9);
    printf("\n \n");


    int otra[] = {2,2,2,1,1,1,3,3,3};
    mostrar(otra,9);
    insercion(otra,9);
    mostrar(otra,9);
    printf("\n \n");
    reverso(otra,9);
    mostrar(otra,9);


    return 0;
}
