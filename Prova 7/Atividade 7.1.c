#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAX 100

int main()
{

    int m1[MAX][MAX];
    int m2[MAX][MAX];
    int msoma[MAX][MAX];

    int L;
    int C;

    FILE *arq = fopen("C:\\Users\\fachi\\OneDrive\\Documentos\\a\\teste.txt", "r");

    if (arq == NULL)
    {
        printf("Error 404  File not found.\n");
        // system("PAUSE");
        return 1;
    }

    fscanf(arq, "%d %d", &L, &C);
    printf("%d %d ", L, C);
    printf("\n");

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            fscanf(arq, "%d", &m1[i][j]);
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            fscanf(arq, "%d", &m2[i][j]);
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    // Soma as matrizes
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            msoma[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", msoma[i][j]);
        }
        printf("\n");
    }

    fclose(arq);
    return 0;
}