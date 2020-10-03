#include "tp0.h"
#include<stdbool.h>

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


int comparar(int vector1[], int n1, int vector2[], int n2) {

    for (int i = 0; i < n1; i++) {
        while(vector1[i] != vector2[i]) {
            if ( (vector1[i] < vector2[i]) || (!vector1[i] && vector2[i]) ) {
                return -1;            
            } else if ( (vector1[i] > vector2[i]) || (vector1[i] && !vector2[i]) ) {
                return 1;       
            }
        }
    }
    return 0;
}


void seleccion(int vector[], int n) {
}
