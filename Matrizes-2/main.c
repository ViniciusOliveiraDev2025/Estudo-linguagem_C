#include <stdio.h>
//Programa para ler 2 matrizes e soma os elementos.
int main(void) {
    int M, N;
    printf("Digite o numero de linhas: ");
    scanf("%d",&M);
    printf("Digite o numero de colunas: ");
    scanf("%d",&N);

    int matA[M][N];
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            printf("Digite o valor da matriz A[%d] [%d]: ",i,j);
            scanf("%d",&matA[i][j]);
        }
    }
    int matB[M][N];
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            printf("Digite o valor da matriz B[%d] [%d]: ",i,j);
            scanf("%d",&matB[i][j]);
        }
    }
    int matC[M][N];
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++){
            matC[i][j] =matA[i][j] + matB[i][j] ;
            printf("%d \n",matC[i][j]);
        }
    }
    return 0;
}