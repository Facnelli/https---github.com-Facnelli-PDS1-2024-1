#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *gerarValores(int n, int *array)
{

    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % 300) + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return array;
}
float maiorValor(int n, int *array)
{
    int valor = array[0];
    for (int i = 1; i < n; i++)
    {
        if (valor < array[i])
        {
            valor = array[i];
        }
    }

    printf("O maior valor eh: %d\n", valor);

    return valor;
}

float menorValor(int n, int *array)
{
    int valor = array[0];
    for (int i = 1; i < n; i++)
    {
        if (valor > array[i])
        {
            valor = array[i];
        }
    }

    printf("O menor valor eh: %d\n", valor);

    return valor;
}

float valorMedio(int n, int *array)
{
    int valor = 0;
    float media;
    for (int i = 0; i < n; i++)
    {
        valor = valor + array[i];
    }

    media = (float)valor / n;
    printf("A media dos valores eh: %.1f\n", media);

    return media;
}

int primeiroValor(int *array)
{
    printf("O primeiro valor eh: %d\n", array[0]);
    return array[0];
}
int ultimoValor(int n, int *array)
{
    printf("O ultimo valor eh: %d\n", array[n - 1]);
    return array[n];
}
float valorMediano(int n, int *array)
{
    if (n % 2 != 0)
    {
        printf("O valor medio eh: %d\n", array[(int)n / (int)2]);
        return array[(int)n / (int)2];
    }
    else
    {
        float medio = (array[(n / 2) - 1] + array[(n / 2)]) / 2.0;
        printf("O valor medio eh: %.1f\n", medio);
        return medio;
    }
}

int main()
{
    srand(time(0));

    int quantidade = 9;
    int *valores = (int *)malloc(quantidade * sizeof(int));

    valores = gerarValores(quantidade, valores);
    maiorValor(quantidade, valores);
    menorValor(quantidade, valores);
    valorMedio(quantidade, valores);
    primeiroValor(valores);
    ultimoValor(quantidade, valores);
    valorMediano(quantidade, valores);

    free(valores);

    return 0;
}
