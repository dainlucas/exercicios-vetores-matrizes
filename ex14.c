#include <stdio.h>
#include <string.h>

int contarVogais(char palavra[]){
    int qtd = 0;

    for (int i = 0; palavra[i] != '\0'; i++){
        if (palavra[i] == 'a' || palavra[i] == 'A' ||
            palavra[i] == 'e' || palavra[i] == 'E' ||
            palavra[i] == 'i' || palavra[i] == 'I' ||
            palavra[i] == 'o' || palavra[i] == 'O' ||
            palavra[i] == 'u' || palavra[i] == 'U'){
            qtd++;
        }
    }

    return qtd;
}

int main(void){
    char palavra[100];

    scanf("%s", palavra);

    printf("Quantidade de vogais: %d\n", contarVogais(palavra));

    return 0;
}
