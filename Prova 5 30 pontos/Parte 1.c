#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float loglcdf( float x, float alpha, float beta){
    float i;
    i = pow(( x / alpha), beta);

    if( x >=0){
        return 1 / ( 1 + i);
    }else{
        return 0;
    }

}

int main(){
    float x = 6;
    float alpha = 2;
    float beta = 2;

    printf("%f", loglcdf(x, alpha, beta));

    return 0;
}