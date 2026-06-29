#include <stdio.h>

int main(void){
    float matriz[4][3] = {
        {1.5, 2.0, 3.5},
        {4.0, 5.5, 6.0},
        {7.5, 8.0, 9.5},
        {10.0, 11.5, 12.0}
    };
    float soma = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }

    printf("Soma: %.2f\n", soma);

    return 0;
}
