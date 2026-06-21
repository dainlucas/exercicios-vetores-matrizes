/*
 1) Escreva um programa que declare um array para armazenar 4 notas escolares. O
 programa deve pedir para o usuário digitar cada uma das notas, salvá-las no array e, no
 final, exibir todas as notas digitadas e a média aritmética delas.
 */

#include <stdio.h>

int main(void){
    double notas[4] = {0};
    double media = 0, soma = 0;

    for (int n = 0; n < 4; n++){
        scanf("%lf", &notas[n]);
        soma += notas[n];
    }

    media = soma/4;

    for (int p = 0; p < 4; p++){
        printf("%.2f\n", notas[p]);
    }
    printf("Media: %.2f\n", media);

    return 0;
}
