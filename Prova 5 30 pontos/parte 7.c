#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int numeroDivisores( int x, int y){
    int divisorXY;
    int resultado = 0;

    if( x >= y){
        divisorXY = x;
    }else{
        divisorXY = y;
    }

    while( divisorXY > 1){
        if(( x % divisorXY == 0) && ( y % divisorXY == 0)){
            resultado = resultado + 1;
            divisorXY = divisorXY - 1;
        }else{
            divisorXY = divisorXY - 1;
        }
    }

    return resultado;
}

int primosEntreSi( int x, int y){
    if(numeroDivisores( x, y) == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int x = 27;
    int y = 32;

    //scanf("%d", &x);
    //scanf("%d", &y);

    printf("%d", primosEntreSi( x, y));

    return 0;
}
