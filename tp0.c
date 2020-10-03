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

    int posicion_maximo = 0;

    if (n == 0) {
        return -1;
    }

    for (int i = 0; i < n; i++) {
        if(vector[i] > vector[posicion_maximo]) {
            posicion_maximo = i;
        }
    }

    return posicion_maximo;

}


int comparar(int vector1[], int n1, int vector2[], int n2) {

    if (n1 != n2) {

        if(n1 < n2) {
        
            for (int i = 0; i < n1; i++) {
                if (vector1[i] > vector2[i]) {
                    return 1;       
                }                
            }
            return -1;
            
        } else if (n1 > n2) {
        
            for (int i = 0; i < n2; i++) {
                if (vector1[i] < vector2[i]) {
                    return -1;            
                }              
            }
            return 1;
        }        

    } else {
        
        for (int i = 0; i < n1; i++) {
            if (vector1[i] < vector2[i]) {
                return -1;            
            } else if (vector1[i] > vector2[i]) {
                return 1;       
            }
        }
        
    }

    return 0;

}


void seleccion(int vector[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vector[i] > vector[j]) {
                swap(&vector[i], &vector[j]);
            }
        }
    }

}
