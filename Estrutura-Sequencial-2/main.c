#include <stdio.h>

// Programa calcular consumo medio de combustivel

int main(void) {
    double DistanciaPercorria, ConsumoCombustivel, ConsumoMedio;

    printf("Informe quantos Km foram percorridos? ");
    scanf("%lf", &DistanciaPercorria);
    printf("Informe quanto de combustivel foi gasto: ");
    scanf("%lf", &ConsumoCombustivel);

    ConsumoMedio = DistanciaPercorria / ConsumoCombustivel;
    printf("O consumo medio de combustivel foi de: %.2lf Km/l\n", ConsumoMedio);
    return 0;
}