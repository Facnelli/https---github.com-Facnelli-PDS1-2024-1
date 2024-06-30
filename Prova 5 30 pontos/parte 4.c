#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float flouca( float x, float alpha){
    float modulo = abs(pow( alpha, 3));

    if( x < 0){
        return ( alpha * sqrt( -x));
    }else{
        if(( x > 0) && ( x < modulo)){
        return ( alpha * exp( -alpha * x));
        }else{
            return alpha;
        }
    }
}

int main(){
    float x = 2;
    float alpha = 2;

    printf("%f", flouca(x, alpha));

    return 0;
}