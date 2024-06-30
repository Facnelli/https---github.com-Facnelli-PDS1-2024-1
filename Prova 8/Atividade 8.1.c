#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAX 100

int main()
{

    int estoque[MAX][MAX];

    FILE *arq = fopen("estoque.txt", "r");

    if (arq == NULL)
    {
        printf("Error 404  File not found.\n");
        // system("PAUSE");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fscanf(arq, "%d", &estoque[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j < 3; j++)
        {
            estoque[i][j + 1] = estoque[i][j] * estoque[i][j - 1];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", estoque[i][j]);
        }
        printf("\n");
    }

    fclose(arq);

    return 0;
}