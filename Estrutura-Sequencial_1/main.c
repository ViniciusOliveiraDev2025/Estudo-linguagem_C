#include <stdio.h>
//Programa para ler medidas de um terreno!!

int main(void) {
   int Largura, Comprimento;
   double ValorMetro, Preco, Area;

    printf("Digite a largura do terreno: ");
    scanf("%d", &Largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%d", &Comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &ValorMetro);

    Area = Largura * Comprimento;
    Preco = Area * ValorMetro;

    printf("Area do terreno: %.2lf metros quadrados\n", Area);
    printf("Preco do terreno: R$ %.2lf\n", Preco);
    return 0;
}