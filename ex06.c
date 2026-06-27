/*
 Crie um programa que preencha um vetor de 15 números inteiros. Depois, o programa
 deve pedir para o usuário digitar um valor qualquer. O programa deve buscar esse valor
 no vetor e informar se ele foi encontrado ou não, indicando a posição (índice) onde ele
 está.
 */

#include <stdio.h>

int buscarValor(int vetor[], int tamanho, int valor){

    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == valor){
            return i;
        }
    }

    return -1;

}

int main(void){
    int listaNumeros[15], valorUsr;
    int posicao;

    for (int i = 0; i < 15; i++){
        scanf("%d", &listaNumeros[i]);
    }

    scanf("%d", &valorUsr);

    posicao = buscarValor(listaNumeros, 15, valorUsr);

    if (posicao == -1){
        printf("Valor nao encontrado\n");
        return 0;
    }

    printf("Valor [%d] encontrado, indice [%d]\n", listaNumeros[posicao], posicao);

    return 0;
}
