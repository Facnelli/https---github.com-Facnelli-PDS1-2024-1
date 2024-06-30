#include <stdio.h>

int paridade(int n){
    if (n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    int resultado;
    printf("Digite o valor de um numero:\n");

    scanf("%d", &num);

    resultado = paridade(num);

    printf("%d", resultado);

    return 0;
}