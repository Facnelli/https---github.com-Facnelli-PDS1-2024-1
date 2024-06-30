#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

#define tamanhoMaximo 100

void lerMatriz(FILE *file, int matriz[tamanhoMaximo][tamanhoMaximo], int linhas, int colunas)
{

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            fscanf(file, "%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[tamanhoMaximo][tamanhoMaximo], int linhas, int colunas)
{

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarMatrizes(int matriz1[tamanhoMaximo][tamanhoMaximo], int matriz2[tamanhoMaximo][tamanhoMaximo], int resultado[tamanhoMaximo][tamanhoMaximo], int linhas, int colunas)
{

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main()
{
    // o arquivo txt tem que estar na mesma pasta e file R é para ler

    FILE *file = fopen("C:\\Users\\fachi\\OneDrive\\Documentos\\a\\teste.txt", "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        system("PAUSE");
        return 1;
    }

    int linhas, colunas;
    fscanf(file, "%d %d", &linhas, &colunas);

    int matriz1[tamanhoMaximo][tamanhoMaximo];
    int matriz2[tamanhoMaximo][tamanhoMaximo];
    int resultado[tamanhoMaximo][tamanhoMaximo];

    lerMatriz(file, matriz1, linhas, colunas);
    lerMatriz(file, matriz2, linhas, colunas);

    fclose(file);

    somarMatrizes(matriz1, matriz2, resultado, linhas, colunas);

    printf("Matriz resultante da soma:\n");
    imprimirMatriz(resultado, linhas, colunas);

    return 0;
}