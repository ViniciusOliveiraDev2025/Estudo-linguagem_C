#include <stdio.h>
//Programa para ler media de idades

int main(void) {
    int Idade, Soma, Cont ;
    double Media;

    printf("Digite as idades: ");
    scanf("%d", &Idade);
    Soma = 0;
    Cont = 0;
    while (Idade >=0) {
        Soma = Soma + Idade;
        Cont = Cont + 1;
        scanf("%d", &Idade);
    }
    if (Cont == 0) {
        printf("Impossivel calcular\n");
    } else{
        Media =(double) Soma / Cont;
        printf("Media = %.2lf\n", Media);
    }
    return 0;
}

