#include <stdio.h>

//Programa para ler glicose e mostrar a classificação

int main(void) {
    double glicose;

    printf("Digite a media da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100) {
        printf("Classificacao: Normal\n");
    } else if (glicose >100 && glicose <=140) {
        printf("Classificacao: Elevado\n");
    }else {
        printf("Classificacao: Diabetes\n");
    }
    return 0;
}