#include <stdio.h>
#include <math.h>

void converte_metros(float metro){

    float decimetro, centimetro, milimetro;

    decimetro = metro * 10;
    centimetro = metro * 100;
    milimetro = metro * 1000;

    printf("%.1f\n", decimetro);
    printf("%.1f\n", centimetro);
    printf("%.1f\n", milimetro);

}

int main(){
    float metros;

    printf("diga o valor em metros?\n");
    scanf("%f", &metros);

    converte_metros(metros);
    
    return 0;
}