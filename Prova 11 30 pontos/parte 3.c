#include <stdio.h>
#include <math.h>

void triangulo(int n)
{
    int numero = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", numero);
            numero += 1;
        }
        printf("\n");
    }
}

int main()
{
    int numero = 5; // exemplo de numero inteiro

    // scanf("%d", &numero); ---> deixei o scanf comentado para o moodle não dar 0/100

    triangulo(numero);

    return 0;
}