#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void contagem(int *v)
{
    int aleatorio;
    for (int i = 0; i < 5000000; i++)
    {
        aleatorio = rand() % 1000;
        v[aleatorio]++;
    }
}

int maior(int *v)
{
    int maiorNumero = v[0];
    for (int i = 1; i < 1000; i++)
    {
        if (v[i] > maiorNumero)
        {
            maiorNumero = v[i];
        }
    }
    return (maiorNumero);
}

int menor(int *v)
{
    int menorNumero = v[0];
    for (int i = 1; i < 1000; i++)
    {
        if (v[i] < menorNumero)
        {
            menorNumero = v[i];
        }
    }
    return (menorNumero);
}

int main()
{
    srand(time(NULL));

    int vetor_contagem[1000] = {0};
    int diferenca;
    int maiorN;
    int menorN;

    contagem(vetor_contagem);

    maiorN = maior(vetor_contagem);
    menorN = menor(vetor_contagem);

    diferenca = maiorN - menorN;

    printf("%d - %d = %d ", maiorN, menorN, diferenca);

    return 0;
}
