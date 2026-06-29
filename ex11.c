/*
    Escreva uma função que receba um vetor de inteiros e seu tamanho como
    argumentos, ordene o vetor em ordem crescente (do menor para o maior). Chame essa
    função na main() e mostre o vetor ordenado.
 */

#include <stdio.h>

void ordenar(int vetor[], int tamanho){
    int aux;

    for (int i = 0; i < tamanho - 1; i++){
        for (int j = i + 1; j < tamanho; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main(void){
    int vetor[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor, 10);

    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
