#include <stdio.h>

int main(void){
    int matriz[4][4];
    int soma;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        soma = 0;
        for (int j = 0; j < 4; j++){
            soma += matriz[i][j];
        }
        printf("Soma linha %d: %d\n", i, soma);
    }

    for (int j = 0; j < 4; j++){
        soma = 0;
        for (int i = 0; i < 4; i++){
            soma += matriz[i][j];
        }
        printf("Soma coluna %d: %d\n", j, soma);
    }

    return 0;
}
