/*
    Crie um programa que leia dois vetores, A e B, de 8 elementos inteiros cada. O
    programa deve gerar um terceiro vetor C, onde cada elemento de C é a soma dos
    elementos correspondentes de A e B (C[i]=A[i]+B[i]). Exiba o vetor C.
 */

#include <stdio.h>

int main(void){
    int A[8], B[8];

    for (int i = 0; i < 8; i++){
        scanf("%d %d", &A[i], &B[i]);
    }

    int C[8];

    for (int i = 0; i < 8; i++){
        C[i] = A[i] + B[i];
    }

    for (int p = 0; p < 8; p++){
        printf("%d ", C[p]);
    }

    printf("\n");

    return 0;
}
