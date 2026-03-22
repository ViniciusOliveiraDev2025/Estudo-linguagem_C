#include <stdio.h>

//Codigo de avalicaçao posto de gasolina

int main(void) {
   int Avaliaçao, Bom, Regular, Ruim, Soma, Finalizar;

    printf("Avalie o posto de gasolina:(1)Bom, (2)Regular, (3)Ruim, (4)Finalizar\n");
    scanf("%d", &Avaliaçao);
    Bom = 0;
    Regular = 0;
    Ruim = 0;
    while (Avaliaçao != 4) {
        if (Avaliaçao == 1) {
            Bom = Bom + 1;
        } else if (Avaliaçao == 2) {
            Regular = Regular + 1;
        } else if (Avaliaçao == 3) {
            Ruim = Ruim + 1;
        }

        printf("Avalie o posto de gasolina:(1)Bom, (2)Regular, (3)Ruim, (4)Finalizar\n");
        scanf("%d", &Avaliaçao);
    }
    if (Avaliaçao == 4) {
        printf("Obrigado pela avaliacao!");
    }
    Soma = Bom + Regular + Ruim;
    printf("Total de avaliacoes: %d\n", Soma);
    printf("Bom: %d\n", Bom);
    printf("Regular: %d\n", Regular);
    printf("Ruim: %d\n", Ruim);

    return 0;
}