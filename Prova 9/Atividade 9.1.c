#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAX 100

int main()
{

    int vendas[MAX][MAX];
    float media = 0;
    int totalVendas = 0;
    int totalItens = 0;

    FILE *arq = fopen("vendas.txt", "r");

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
            fscanf(arq, "%d", &vendas[i][j]);
            // printf("%d ", vendas[i][j]);
        }
        // printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        totalVendas = totalVendas + vendas[i][0];
        totalItens = totalItens + vendas[i][1];
    }

    media = (float)totalItens / 4;

    printf("A media de vendas foi: %.2f\n", media);
    printf("O valor total das vendas foi: %d\n", totalVendas);
    printf("A quantidade total de itens foi: %d\n", totalItens);

    fclose(arq);

    return 0;
}