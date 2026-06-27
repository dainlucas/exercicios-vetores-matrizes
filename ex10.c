/*
    Escreva um programa que leia um vetor V1 de 10 elementos. O programa deve copiar
    os elementos de V1 para um segundo vetor V2, mas de forma que V2 não contenha
    nenhum elemento repetido.
 */

#include <stdio.h>

int main(void){
    int V1[10], V2[10];
    int tamanho = 0;
    int duplicado;

    for (int i = 0; i < 10; i++){
        duplicado = 0;

        scanf("%d", &V1[i]);

        for (int j = 0; j < tamanho; j++){

            if (V1[i] == V2[j]){
                duplicado = 1;
                break;
            }
        }
        if (duplicado == 0){
            V2[tamanho] = V1[i];
            tamanho++;
        }
    }

    for (int i = 0; i < tamanho; i++){
        printf("%d ", V2[i]);
    }
    printf("\n");

    return 0;
}
