#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[100];
    int palindromo = 1;
    int tamanho;
    int inicio, fim;

    fgets(palavra, 100, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    tamanho = strlen(palavra);
    inicio = 0;
    fim = tamanho - 1;

    while (inicio < fim){
        if (palavra[inicio] == ' '){
            inicio++;
        } else if (palavra[fim] == ' '){
            fim--;
        } else if (palavra[inicio] != palavra[fim]){
            palindromo = 0;
            break;
        } else {
            inicio++;
            fim--;
        }
    }

    if (palindromo == 1){
        printf("Palindromo\n");
    } else {
        printf("Nao palindromo\n");
    }

    return 0;
}
