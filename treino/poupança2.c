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
    double rendimento_total;
    double juros = 1.01;
    double deposito = 200.0;
    double retirada = 50.0;

    //rendimento mês 1
    rendimento_total = (poupanca*juros) - poupanca;
    poupanca = rendePoupanca(poupanca, juros);
    
    //deposito mês 2
    poupanca = depositof(poupanca, deposito);
    //rednimento mês 2
    rendimento_total = rendimento_total + (poupanca*juros) - poupanca;
    poupanca = rendePoupanca(poupanca, juros);
    //retirada 
    poupanca = retiradaf(poupanca, retirada);
    //rednimento mês 3
    rendimento_total = rendimento_total + (poupanca*juros) - poupanca;
    poupanca = rendePoupanca(poupanca, juros);

    printf("A poupanca tem R$%.2f reais de saldo acumulado", poupanca);
    printf("\n");
    printf("O rendimento total foi de R$%.2f reais", rendimento_total);

}