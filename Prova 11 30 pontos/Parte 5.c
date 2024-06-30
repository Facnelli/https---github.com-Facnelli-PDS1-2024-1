#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void preenche(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = 1 + rand() % 100;
        printf("%d\n", v[i]);
    }
}

void intercala(int *z, int *x, int *y, int n)
{
    int a = 0;
    int b = 0;

    for (int i = 0; i < (2 * n); i++)
    {
        if (i % 2 == 0)
        {
            z[i] = x[a];
            a++;
        }
        else
        {
            z[i] = y[b];
            b++;
        }
        printf("%d\n", z[i]);
    }
}

int main()
{
    srand(time(NULL));

    int quantidade = 10;

    int x[quantidade];
    int y[quantidade];
    int z[2 * quantidade];

    preenche(x, quantidade);
    printf("\n");
    preenche(y, quantidade);
    printf("\n");

    intercala(z, x, y, quantidade);

    return 0;
}
