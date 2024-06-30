#include <stdio.h>

int potencia(int base, int expoente){
    int i = expoente;
    int b = base;
    while(i > 1){
        base = base * b;
        i = i - 1;
    }
    return base;
}

int main(){
    int base;
    int expoente;

    printf("Digite o valor da base e expoente:\n");

    scanf("%d", &base);
    scanf("%d", &expoente);

    int resultado = potencia(base, expoente);

    printf("%d", resultado);

    return 0;
}