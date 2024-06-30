#include <stdio.h>
#include <math.h>

float areaQuadrado( float lado){
    return lado * lado;
}

float areaRetangulo( float base, float altura){
    return base * altura;
}

float areaTrapezio( float baseMenor, float baseMaior, float altura){
    return ((( baseMenor + baseMaior) * altura) / 2);
}

float areaTriangulo( float base,float altura){
    return (( base * altura) / 2);
}

float areaLosangulo( float diagonal1, float diagonal2){
    return (( diagonal1 * diagonal2) / 2);
}

int main(){
    int escolha;

    printf("Escolha a figura geometrica: \n");
    printf("1 - Quadrado.\n");
    printf("2 - Retângulo.\n");
    printf("3 - Trapézio.\n");
    printf("4 - Triângulo.\n");
    printf("5 - Losangulo.\n");
    scanf("%d", &escolha);
    float lado;
    float baseRetangulo;
    float alturaRetangulo;
    float baseMenor;
    float baseMaior;
    float alturaTrapezio;
    float baseTriangulo;
    float alturaTriangulo;
    float diagonalMaior;
    float diagonalMenor;

    switch (escolha){
        case 1:
        printf("Diga o lado do quadrado: ");
        scanf("%f", &lado );

        printf("%f", areaQuadrado( lado));

        break;
        case 2:
        printf("Diga a base e a altura do retangulo: ");
        scanf("%f", &baseRetangulo);
        scanf("%f", &alturaRetangulo);

        printf("%f", areaRetangulo( baseRetangulo, alturaRetangulo));

        break;
        case 3:
        printf("Diga a base menor, a base maior e a altura do trapezio: ");
        scanf("%f", &baseMenor);
        scanf("%f", &baseMaior);
        scanf("%f", &alturaTrapezio);

        printf("%f", areaTrapezio( baseMenor, baseMaior, alturaTrapezio));

        break;
        case 4:
        printf("Diga a base e a altura do triangulo: ");
        scanf("%f", &baseTriangulo);
        scanf("%f", &alturaTriangulo);

        printf("%f", areaTriangulo( baseTriangulo, alturaTriangulo));

        break;
        case 5:
        printf("Diga as diagonais do losangulo: ");
        scanf("%f", &diagonalMenor);
        scanf("%f", &diagonalMaior);

        printf("%f", areaLosangulo( diagonalMenor, diagonalMaior));

        break;
        default:
        break;
    }
}