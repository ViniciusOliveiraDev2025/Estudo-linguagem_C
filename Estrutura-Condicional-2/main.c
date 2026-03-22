#include <stdio.h>
//Programa para ler 3 lançamentos de dardos e mostrar a maior nota.

int main(void) {
    double Nota1, Nota2, Nota3, MaiorNota;

    printf("Digite as tres notas");
    scanf("%lf", &Nota1);
    scanf("%lf", &Nota2);
    scanf("%lf", &Nota3);

    if(Nota1>Nota2 && Nota1>Nota3) {
        MaiorNota = Nota1;
        printf("Maior nota: %.2lf\n", MaiorNota);
    } else if (Nota2>Nota1 && Nota2>Nota3) {
        MaiorNota = Nota2;
        printf("Maior nota: %.2lf\n", MaiorNota);
    } else {
        MaiorNota = Nota3;
        printf("Maior nota: %.2lf\n", MaiorNota);
    }
    return 0;
}