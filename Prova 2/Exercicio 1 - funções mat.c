#include <stdio.h>
#include <math.h>

float cauchy(float x){

    double pi = M_PI;
    float cauchy = 1 / (pi * (1 + x * x ));

    return cauchy;
}

float gumbel(float x, float mu, float beta){

    double z = (x - mu) / beta;
    float gumbel = (1 / beta) * (exp(-(z+exp(-z))));

    return gumbel;
}

float laplace(float x, float mu, float b){

    double modulo = -fabs(x - mu);
    float laplace = ((1 / (2 * b)) * (exp(modulo / b)) );

    return laplace;
}

int main(){

    printf("cauchy: %.6f\ngumbel: %.6f\nlaplace: %.6f", cauchy(-2), gumbel(0, 0.5, 2), laplace(-6, -5, 4));

    return 0; 
    }

