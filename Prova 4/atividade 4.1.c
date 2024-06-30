#include <stdio.h>
#include <math.h>

int main(){
    while(1){
        printf("Digite um número: ");
        int numero;
        scanf("%d", &numero);

        if( numero > 0){
            if( numero % 2 == 0){
                printf("%d é um número par.\n", numero);

            }else{
                printf("%d é um número ímpar.\n", numero);
            }
        }else{
            if( numero < 0){
                printf("Número negativo detectado. Insira números positivos ou zero.");
                continue;
            }else{
                printf("Programa encerrado.\n");
                break;
            } 
        }       
    }
    
    return 0;
}