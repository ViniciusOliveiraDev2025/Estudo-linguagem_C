#include <stdio.h>

//Programa para ler senhas e valida-las

int main(void) {
    int SenhaCerta, Senha2;

    SenhaCerta = 2312;
    printf("Digite a senha: ");
    scanf("%d", &Senha2);

    while (SenhaCerta != Senha2) {
        printf("Senha Invalida! tente novamente: \n");
        scanf("%d", &Senha2);
    }
    if (SenhaCerta == Senha2) {
        printf("Senha Valida!\n");
    }
    return 0;
}