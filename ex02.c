/*
 Crie um array com 6 números inteiros quaisquer (por exemplo: [10, 20, 30, 40, 50, 60]).
 Desenvolva um algoritmo que percorra e exiba os elementos desse array na tela em
 ordem inversa (do último para o primeiro).
 */
#include <stdio.h>

int main (void){

    int array[6] = {10, 20, 30, 40, 50, 60};

    for (int i = 5; i >= 0; i--){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
