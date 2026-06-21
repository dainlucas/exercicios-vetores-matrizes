/*
    Escreva um programa para declarar e ler um array contendo 5 valores do float. Seu
    programa deve trocar o elementos do array de posição.
    Ex : [1, 5, 7, 8, 3] → [3, 8, 7, 5 , 1]
 */

#include <stdio.h>

int main(void){

    float array[5] = {0};
    float aux[5] = {0};

    for (int i = 0; i < 5; i++){
        scanf("%f", &array[i]);
        aux[i] = array[i];
    }

    array[0] = aux[4];
    array[1] = aux[3];
    array[3] = aux[1];
    array[4] = aux[0];

    for (int i = 0; i < 5; i++){
        printf("%f ", array[i]);
    }
    printf("\n");

    return 0;
}
