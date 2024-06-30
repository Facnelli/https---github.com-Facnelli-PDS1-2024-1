#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Adicione esta linha para usar a função time()

void preenche(int *v, int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        v[i] = 1 + rand() % 100;
    }
}

void media(int *v, int n)
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma = soma + v[i];
    }
    printf("%d\n", soma);
    // printf("%d\n", n);
    printf("%.2f\n", (float)soma / (float)n);
}

int main()
{
    int n = 5;
    int v[n];

    preenche(v, n);

    media(v, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
