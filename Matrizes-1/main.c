#include <stdio.h>
//Programa para ler uma matriz e mostrar os valores negativos.

int main(void) {
    int M,N;

    printf("Digite a quantidade de linhas:");
    scanf("%d",&M);
    printf("Digite a quantidade de colunas:");
    scanf("%d",&N);

    int mat[M][N];
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            printf("Digite o elemento: %d:",i+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            if(mat[i][j]<0) {
                printf("Valor negativo: %d\n",mat[i][j]);
            }
        }
    }

    return 0;
}