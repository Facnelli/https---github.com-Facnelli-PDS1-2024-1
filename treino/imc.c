#include <stdio.h>
#include <math.h>


double pesoIdeal(double faixa, double altura) {
    return faixa * pow(altura,2);
}


void main(){


    double pesoOlivia = 45, alturaOlivia = 1.76;
    double pesoBrutos = 122, alturaBrutos  = 1.84;

    double pesoIdealOlivia = pesoIdeal(18.5, alturaOlivia);
    double pesoIdealBrutos = pesoIdeal(25, alturaBrutos);

    printf("Olivia precisa ganhar %.2f kg \n", pesoIdealOlivia - pesoOlivia);
    printf("Brutos precisa perder %.2f kg \n", pesoBrutos - pesoIdealBrutos);

    
}

