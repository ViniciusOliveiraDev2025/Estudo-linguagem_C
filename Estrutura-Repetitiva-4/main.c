#include <stdio.h>

int main(void) {
    int i, N, X, Dentro, Fora;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &N);

    Dentro = 0;
    Fora = 0;
    for (i = 1; i <= N; i++) {
        printf("Digite o numero : ");
        scanf("%d", &X);
        if (X >= 10 && X <= 20){
            Dentro = Dentro + 1;
        }else {
            Fora = Fora + 1;
        }
    }
    printf("%d DENTRO\n", Dentro);
    printf("%d FORA\n", Fora);
    return 0;
}