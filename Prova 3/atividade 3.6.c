#include <stdio.h>
#include <math.h>

float quantos_salarios(float salario){
    float salarios;

    salarios = salario / 1412;

    return salarios;
}

int main(){
    float salario;

    printf("qual o seu salario?\n");
    scanf("%f", &salario);

    printf("%f", quantos_salarios(salario));
    
    return 0;
}