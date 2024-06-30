#include <stdio.h>
#include <math.h>
#include <conio.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_WHITE "\x1b[0m"

double imc (float peso, float altura) {
    return peso / pow(altura, 2);
}

double pesoIdeal(double faixa, double altura) {
    return faixa * pow(altura,2);
}

void main() {
    float peso = ;
    float altura = 1.21;

    double imc1 = imc(peso, altura);

    printf(ANSI_COLOR_BLUE "Seu IMC e de %.1f \n", imc1);

    if (imc1 > 25) {

        double pesoPerder = pesoIdeal(25, altura);

        printf(ANSI_COLOR_RED "Necessario perder %.2f Kg", peso - pesoPerder);

    } else {
        if (imc1 < 18.5) {

            double pesoGanhar = pesoIdeal(18.5, altura);

            printf(ANSI_COLOR_RED "Necessario ganhar %.2f Kg", pesoGanhar - peso);
        } else {
            printf(ANSI_COLOR_GREEN "Parabens!!! seu peso esta na faixa ideal");
        }
    }
printf(ANSI_COLOR_WHITE);

}