#include <stdio.h>
#include <math.h>

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    getchar();
    
    while(1){
        char condicional;
        int numeroNovo;

        printf("Deseja inserir outro número? (S para Sim, N para Não): ");
        scanf("%c", &condicional);
        getchar();

        if((condicional == 'S') || (condicional == 's')){
            printf("Digite um número inteiro: ");
            scanf("%d", &numeroNovo);
            getchar();

            if(numeroNovo > numero){
                numero = numeroNovo;
            }
        }else{
            printf("O maior número inserido foi: %d\n", numero);
            break;
        }

    }
    
    return 0;
}