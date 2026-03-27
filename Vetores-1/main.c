#include <stdio.h>
//Programa para ler vetor e mostrar numeros negativos.

int main(void) {

    int N, i, Negativos;

    printf("Digite quantos numeros voce vai digitar: ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%lf", &vet[i]);
    }
    printf("NUMEROS NEGATIVOS: \n");

    for (i = 0; i < N; i++) {
        if (vet[i] < 0) {
            printf("%.1lf\n", vet[i]);
        }
    }
    return 0;
}