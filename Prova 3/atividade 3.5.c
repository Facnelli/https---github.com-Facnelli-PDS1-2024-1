#include <stdio.h>
#include <math.h>

double volume(double raio){
    double volume;


    volume =  (4.0/3.0 * M_PI) * (pow(raio, 3));

    return volume;
}

int main(){
    int raio;

    printf("qual o raio da esfera?\n");
    scanf("%d", &raio);

    printf("%lf", volume(raio));

    
    return 0;
}