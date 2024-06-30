#include <stdio.h>

float calcula_resistencia_total(float R1, float R2, float R3){
    float RTOTAL = ( 1 / (( 1/R1 )+( 1/R2 )+( 1/R3 )));

    return RTOTAL;
}

int main(){
    float R1, R2, R3;
    printf("Digite valores de R1, R2 e R3\n");

    scanf("%f", &R1);
    scanf("%f", &R2);
    scanf("%f", &R3);

    printf("%f", calcula_resistencia_total(R1, R2, R3));

    return 0;
}