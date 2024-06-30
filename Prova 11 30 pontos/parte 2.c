#include <stdio.h>
#include <math.h>

int main()
{

    int nota;

    scanf("%d", &nota);

    switch (nota)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("F");
        break;
    case 5:
        printf("E");
        break;
    case 6:
        printf("D");
        break;
    case 7:
        printf("C");
        break;
    case 8:
        printf("B");
        break;
    case 9:
    case 10:
        printf("A");
        break;

    default:
        printf("nota inválida");
        break;
    }

    return 0;
}