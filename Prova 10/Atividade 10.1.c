#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAX 100

int main()
{

    int ponto[MAX][MAX];
    int numeroHoras = 0;
    int codigoFuncionario = 0;
    int totalHoras = 0;

    FILE *arq = fopen("ponto.txt", "r");

    if (arq == NULL)
    {
        printf("Error 404  File not found.\n");
        // system("PAUSE");
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            fscanf(arq, "%d", &ponto[i][j]);
            // printf("%d ", ponto[i][j]);
        }
        // printf("\n");
    }

    while (codigoFuncionario < 200)
    {
        if (codigoFuncionario >= 101 && codigoFuncionario <= 199)
        {
            for (int i = 0; i < 4; i++)
            {
                if (codigoFuncionario == ponto[i][1])
                {
                    numeroHoras = numeroHoras + ponto[i][0];
                }
            }
            if (numeroHoras > 0)
            {

                printf("O funcionario %d trabalhou por %d horas.\n", codigoFuncionario, numeroHoras);
            }
            totalHoras += numeroHoras;
            numeroHoras = 0;
        }
        codigoFuncionario += 1;
    }
    printf("O tempo total trabalhado foi de %d hotas.", totalHoras);

    fclose(arq);

    return 0;
}