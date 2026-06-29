#include <stdio.h>

int main(void){
    int matriz[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    printf("Diagonal secundaria: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", matriz[i][3 - i]);
    }
    printf("\n");

    return 0;
}
