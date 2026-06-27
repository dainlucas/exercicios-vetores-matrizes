/*
 Crie uma função que recebe como argumento um vetor de inteiros de tamanho 10 ainda
 um número inteiro qualquer. Sua função deve retornar a posição do número no vetor
 caso o número esteja no vetor ou -1 caso contrário.
 */

#include <stdio.h>

int buscarValor(int vetor[10], int valor){

    for (int i = 0; i < 10; i++){
        if (vetor[i] == valor){
            return i;
        }
    }

    return -1;
}
