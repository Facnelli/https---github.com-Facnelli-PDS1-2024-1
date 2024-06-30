#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int maior( int x, int y){
    if( x >= y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int x = 123;
    int y = 172;

    printf("%d", maior( x ,y));

    return 0;
}