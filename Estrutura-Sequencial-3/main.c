#include <stdio.h>

//Programa para calcular troco de produto!

int main(void) {

    double ValorUnitario, Quantidade, ValorPago, Troco;

    printf("Informe o Valor do produto: ");
    scanf("%lf", &ValorUnitario);

    printf("Informe a Quantidade de produto: ");
    scanf(" %lf", &Quantidade);

    printf("Informe o valor recebido: ");
    scanf("%lf", &ValorPago);

    Troco = ValorPago - (ValorUnitario * Quantidade);

    printf("Troco do cliente: R$%.2lf\n", Troco);
    return 0;
}