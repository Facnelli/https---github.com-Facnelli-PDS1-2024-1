#include <stdio.h>
#include <math.h>

float fatorial(int n)
{
    float resultado = 1.0;

    if (n > 1)
    {
        for (int i = 1; i <= n; i++)
        {
            resultado *= i;
        }
    }

    return resultado;
}

int main()
{
    float euler = 1.0;
    int i = 1;

    while ((1 / fatorial(i)) > pow(10, -6))
    {
        euler = euler + (1 / fatorial(i));
        i += 1;
    }

    printf("%f", euler);
    //printf("\n%f", exp(1));

    return 0;
}