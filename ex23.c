#include <stdio.h>

int main(void){
    int matriz[3][3];
    int simetrica = 1;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] != matriz[j][i]){
                simetrica = 0;
            }
        }
    }

    if (simetrica == 1){
        printf("Matriz simetrica\n");
    } else {
        printf("Matriz nao simetrica\n");
    }

    return 0;
}
