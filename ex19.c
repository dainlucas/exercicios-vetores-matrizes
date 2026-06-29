#include <stdio.h>

int main(void){
    int matriz[3][4];
    int maior;
    int linha = 0, coluna = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("Maior elemento: %d\nLinha: %d\nColuna: %d\n", maior, linha, coluna);

    return 0;
}
