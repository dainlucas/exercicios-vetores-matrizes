#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char nome[100];

    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; nome[i] != '\0'; i++){
        printf("%c", toupper(nome[i]));
    }
    printf("\n");

    for (int i = 0; nome[i] != '\0'; i++){
        printf("%c", tolower(nome[i]));
    }
    printf("\n");

    return 0;
}
