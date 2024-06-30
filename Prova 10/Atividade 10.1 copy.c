#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Produto (Aula de Estruturas, aula 9)

typedef struct
{
    int horas;
    int funcionario;
} PontoEletronico;

int main()
{

    FILE *file;
    PontoEletronico ponto;
    int total_horas = 0;
    int total_funcionarios = 0;

    file = fopen("ponto.txt", "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Funcionário | Horas Trabalhadas\n");
    printf("------------|------------------\n");
    while (fscanf(file, "%d %d", &ponto.horas, &ponto.funcionario) != EOF)
    {
        total_horas += ponto.horas;
        total_funcionarios++;
        printf("    %d       |      %d\n", ponto.funcionario, ponto.horas);
    }

    fclose(file);

    printf("------------|------------------\n");
    printf("Total       |      %d\n", total_horas);
    printf("Total de funcionários: %d\n", total_funcionarios);

    return 0;
}