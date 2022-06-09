#include <stdio.h>

int main(){
    char O;
    float M[3][3], soma = 0.0, count = 0.0;

    scanf("%c", &O);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (j > i){
                soma += M[i][j];
                count++;
            }
        }
    }

    if (O == 'M'){
        soma = soma/count;
    }

    printf("%.1f\n", soma);

    return 0;
}