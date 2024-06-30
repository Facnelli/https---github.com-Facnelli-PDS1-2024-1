#include <stdio.h>
#include <math.h>


float mediaDosValores( float a, float b, float c){
    return (( a + b + c) / 3);
}

float maiorValor( float a, float b, float c){
    if(( a > b) && ( a > c)){
        return a;
    }else{
        if(( b > a) && ( b > c)){
            return b;
        }else{
            return c;
        }
    }
}

float menorValor( float a, float b, float c){
    if(( a < b) && ( a < c)){
        return a;
    }else{
        if(( b < a) && ( b < c)){
            return b;
        }else{
            return c;
        }
    }
}

float somaDosValores( float a, float b, float c){
    return a + b + c;
}

float somaDosQuadrados( float a, float b, float c){
    return (( a * a) + ( b * b) + ( c * c));
}

int main(){
    int a;
    int b;
    int c;
    int escolha;

    printf("Escreva 3 numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    
    do{

        printf("Escolha entre as opcoes:\n");
        printf("1 - Média dos Valores.\n");
        printf("2 - Maior Valor.\n");
        printf("3 - Menor Valor.\n");
        printf("4 - Soma dos Valores.\n");
        printf("5 - Soma dos Quadrados dos Valores.\n");
        printf("6 - Finalizar.\n");

        scanf("%d", &escolha);

        if( escolha == 1){
            printf("A Média dos Valores é: %.1f\n", mediaDosValores( a, b, c));
        }
        if( escolha == 2){
            printf("O Maior Valor é: %.1f\n", maiorValor( a, b, c));
        }
        if( escolha == 3){
            printf("O Menor Valor é: %.1f\n", menorValor( a, b, c));
        }
        if( escolha == 4){
            printf("A Soma dos Valores é: %.1f\n", somaDosValores( a, b, c));
        }
        if( escolha == 5){
            printf("A Soma dos Quadrados dos Valores é: %.1f\n", somaDosQuadrados( a, b, c));
        }
        
    }while( escolha != 6);

    return 0;
}