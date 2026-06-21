/*
 Use o Array do Exercício 4 e mostre também a soma dos valores array.
 */

#include <stdio.h>

int main(void){

    int numeros[10] = {0};
    int soma = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    int maiorNumero = numeros[0];
    int indice = 0;

    for (int i = 1; i < 10; i++){
        if (numeros[i] > maiorNumero){
            maiorNumero = numeros[i];
            indice = i;
        }
    }

    printf("Maior numero: %d\nIndice: %d\nSoma: %d\n", maiorNumero, indice, soma);

    return 0;
}
