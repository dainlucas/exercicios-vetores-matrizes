#include <stdio.h>

int main(void){
    float matriz[4][3] = {
        {1.5, 2.0, 3.5},
        {4.0, 5.5, 6.0},
        {7.5, 8.0, 9.5},
        {10.0, 11.5, 12.0}
    };
    float numero;

    scanf("%f", &numero);

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%.2f ", matriz[i][j] * numero);
        }
        printf("\n");
    }

    return 0;
}
