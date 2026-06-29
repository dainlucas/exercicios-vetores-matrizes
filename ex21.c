#include <stdio.h>

int main(void){
    int M[3][2], transposta[2][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &M[i][j]);
            transposta[j][i] = M[i][j];
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
