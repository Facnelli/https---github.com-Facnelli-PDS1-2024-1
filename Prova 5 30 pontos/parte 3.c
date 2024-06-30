#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mmc( int x, int y){
    int aux1 = 2;
    int resultado = 1;

    do{
        if(( x % aux1 == 0) && ( y % aux1 == 0)){
            resultado = resultado * aux1;
            x = x / aux1;
            y = y / aux1;
            //printf("a%d", aux1);
        }else{
            if( x % aux1 == 0){
                resultado = resultado * aux1;
                x = x / aux1;
                //printf("a%d", aux1);
            }else{
                if( y % aux1 == 0){
                    resultado = resultado * aux1;
                    y = y / aux1;
                    //printf("a%d", aux1);
                }else{
                    aux1 = aux1 + 1;
                    //printf("a%d", aux1);
                }
            }
        }
    } while(( x != 1) || ( y != 1));

    return resultado;
}

int main(){
    int n1 = 16;
    int n2 = 12;

    printf("%d", mmc(n1, n2));

    return 0;
}