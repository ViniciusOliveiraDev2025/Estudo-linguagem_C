#include <stdio.h>

int main(void) {
    int N, i;
    double Numerador, Divisor, Divisao;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&N);

    for(i=1;i<=N;i++) {
        printf("Entre com o numerador: ");
        scanf("%lf",&Numerador);
        printf("Entre com o divisor: ");
        scanf("%lf",&Divisor);
        if(Divisor == 0) {
            printf("DIVISAO IMPOSSIVEL\n");
        } else {
            Divisao = Numerador / Divisor;
            printf("Divisao = %.1lf\n", Divisao);
        }

    }
    return 0;
}