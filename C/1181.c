#include <stdio.h>

int main(){
    int L;
    char T;
    float M[3][3], soma = 0.0;

    scanf("%d %c", &L, &T);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(int k = 0; k < 3; k++){
        soma += M[L][k];
    }

    if (T == 'M'){
        soma = soma/3;
    }

    printf("%.1f\n", soma);

    return 0;
}