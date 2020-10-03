#include "tp0.h"

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap(int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}


int maximo(int vector[], int n) {

    int maximo = 0;
    int posicion_maximo;

    if (n == 0) {
        return -1;
    }

    for (int i = 0; i < n; i++) {
        if(vector[i] > maximo) {
            maximo = vector[i];
            posicion_maximo = i;
        }
    }

    return posicion_maximo;

}

/* Compara dos arreglos de longitud especificada.
 *
 * Devuelve -1 si el primer arreglo es menor que el segundo; 0 si son
 * iguales; o 1 si el primero es el mayor.
 *
 * Un arreglo es menor a otro cuando al compararlos elemento a elemento,
 * el primer elemento en el que difieren no existe o es menor.
 */
int comparar(int vector1[], int n1, int vector2[], int n2) {
    return 0;
}


void seleccion(int vector[], int n) {
}
