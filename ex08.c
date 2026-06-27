/*
    Escreva uma função que receba um vetor de inteiros e seu tamanho como argumentos
    e retorne a quantidade de números pares.
 */

int contarPares(int vetor[], int tamanho){
    int qtd = 0;
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] % 2 == 0){
            qtd++;
        }
    }
    return qtd;
}
