#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int soma_dos_numeros(int n1, int n2){
    return n1 + n2; 
}

int prod_quadrado(int n1, int n2){
    return n1 * (n2 * n2); 
}

int quadrado(int n1){
    return n1 * n1;
}

double seno(double n1, double n2){
    double aux = n1 / n2;
    return sin(aux);
}

int main(){
    int n1;
    int n2;

    printf("Digite o valor de dois numeros:\n");

    scanf("%d", &n1);
    scanf("%d", &n2);

    int resultado1 = soma_dos_numeros(n1, n2);
    int resultado2 = prod_quadrado(n1, n2);
    int resultado3 = quadrado(n1);
    double resultado4 = seno(n1, n2);

    printf("%d\n", resultado1);
    printf("%d\n", resultado2);
    printf("%d\n", resultado3);
    printf("%lf\n", resultado4);

    system("pause");

    return 0;
}