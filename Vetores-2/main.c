#include <stdio.h>
//Programa para ler vetores e mostrar a soma dos valores.

int main(void) {

    double  soma, media;
    int i, N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite o valor do numero %d: " , i + 1);
        scanf("%lf", &vet[i]);
    }
    printf("Valores: \n");
    for (i = 0; i < N; i++) {
        printf(" %lf\n", vet[i]);
    }
    soma = 0;
    for (i = 0; i < N; i++) {
        soma += vet[i];
    }
    media = soma / N;
    printf("Soma = %.1lf\n", soma);
    printf("Media = %.1lf\n", media);


    return 0;
}