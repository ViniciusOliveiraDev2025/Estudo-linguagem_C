#include <stdio.h>

// Programa que calcula notas e mostra se a media foi aprovada ou reprovada.

int main(void) {
   double Nota1, Nota2, NotaFinal;

    printf("Digite a primeira nota do aluno: ");
    scanf("%lf", &Nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%lf", &Nota2);

    NotaFinal = Nota1 + Nota2;
    if (NotaFinal < 60.00) {
        printf("Media: %.2lf\n", NotaFinal);
        printf("Aluno reprovado.\n");
    } else {
        printf("Media: %.2lf\n",NotaFinal);
        printf("Aluno aprovado.\n");
    }
    return 0;
}