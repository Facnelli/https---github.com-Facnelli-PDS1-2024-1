#include <stdio.h>

double rendePoupanca(float poupanca, float rendimento) {
    return poupanca * rendimento;
}

double depositof(float poupanca, float deposito) {
    return poupanca + deposito;
}

double retiradaf(float poupanca, float retirada) {
    return poupanca - retirada;
}

int main(void) {
    float poupanca = 500.0 ;
    double juros = 1.01;
    double deposito = 200.0;
    double retirada = 50.0;

    //mês 1
    poupanca = rendePoupanca(poupanca, juros);

    //mês 2
    poupanca = depositof(poupanca, deposito);
    poupanca = rendePoupanca(poupanca, juros);

    //retirada 
    poupanca = retiradaf(poupanca, retirada);

    //mês 3
    poupanca = rendePoupanca(poupanca, juros);

    printf("A poupanca tem R$%.2f reais de saldo acumulado", poupanca);

}