/*
 Escreva um programa que receba 10 números inteiros do usuário e os armazene em
 um array. Em seguida, o programa deve varrer o array para encontrar e mostrar na tela
 qual é o maior número digitado e em qual posição (índice) do array ele está.
 */

#include <stdio.h>

int main(void){

    int numeros[10] = {0};

    for (int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    int maiorNumero = numeros[0];
    int indice = 0;

    for (int i = 1; i < 10; i++){
        if (numeros[i] > maiorNumero){
            maiorNumero = numeros[i];
            indice = i;
        }
    }

    printf("Maior numero: %d\nIndice: %d\n", maiorNumero, indice);

    return 0;
}
