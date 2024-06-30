#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroEscolhido()
{
    int numeroUsuario;

    printf("Tente adivinhar o numero: ");
    scanf("%d", &numeroUsuario);

    return numeroUsuario;
}
int numeroSorteado()
{
    return ((rand() % 300) + 1);
}

int verificaSorteio(int sorteio, int usuario)
{
    if (sorteio == usuario)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void menorOuMaior(int sorteio, int usuario)
{
    if (sorteio > usuario)
    {
        printf(" ERROU, o número é MAIOR que %d.", usuario);
    }
    else
    {
        printf(" ERROU, o número é MENOR que %d.", usuario);
    }
}
int querContinuar()
{
    char continuar;
    printf("\nDeseja tentar novamente? (s/n)");
    scanf(" %c", &continuar);
    if (continuar == 's' || continuar == 'S')
    {
        return 1;
    }
    else if (continuar == 'n' || continuar == 'N')
    {
        return 0;
    }
    return 0;
}

int main()
{
    srand(time(0));
    int continua = 0;

    do
    {
        int numeroSorteio = numeroSorteado();
        // printf("%d", numeroSorteio);
        int numeroUsuario = numeroEscolhido();
        int verificado = verificaSorteio(numeroSorteio, numeroUsuario);

        while (verificado != 1)
        {
            menorOuMaior(numeroSorteio, numeroUsuario);
            numeroUsuario = numeroEscolhido();
            verificado = verificaSorteio(numeroSorteio, numeroUsuario);
        }
        printf("ACERTOU !");
        continua = querContinuar();

    } while (continua);

    return 0;
}
