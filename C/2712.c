#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    int N, i;
    char placa[100];
    scanf("%d ", &N);
    
    for(i = 1; i <= N; i++){
        scanf ("%s", placa);
        
        if ((strlen(placa) == 8 && isupper(placa[0]) && isupper(placa[1])
        && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4])
        && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])))
            if(placa[strlen(placa)-1] == '1' || placa[strlen(placa)-1] == '2'){
                printf("MONDAY\n");
            }else if(placa[strlen(placa)-1] == '3' || placa[strlen(placa)-1] == '4'){
                printf("TUESDAY\n");
            }else if(placa[strlen(placa)-1] == '5' || placa[strlen(placa)-1] == '6'){
                printf("WEDNESDAY\n");
            }else if(placa[strlen(placa)-1] == '7' || placa[strlen(placa)-1] == '8'){
                printf("THURSDAY\n");
            }else{
                printf("FRIDAY\n");
            }
            
        else {
            printf("FAILURE\n");
        }
    }
    return 0;
}