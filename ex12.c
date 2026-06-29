#include <stdio.h>
#include <string.h>

int main(void){
    char frase[200];
    int qtdA = 0;

    fgets(frase, 200, stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == 'a' || frase[i] == 'A'){
            qtdA++;
        }
    }

    printf("Total de caracteres: %lu\n", strlen(frase));
    printf("Letra a: %d\n", qtdA);

    return 0;
}
