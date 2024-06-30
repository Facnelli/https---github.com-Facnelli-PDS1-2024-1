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




int main(){
    int x = 18;
    int y = 12;

    //scanf("%d", &x);
    //scanf("%d", &y);

    printf("%d", numeroDivisores( x, y));

    return 0;
}
