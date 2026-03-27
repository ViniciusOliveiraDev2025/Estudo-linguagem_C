#include <stdio.h>
//Programa para gerar 2 vetores e o terceiro ser a soma dos outros 2 vetores gerados.

int main(void) {

    int N,i,j,k;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&N);

    double vetorA[N],vetorB[N],vetorC[N];
    for(i=0;i<N;i++) {
        printf("Digite os valores do vetor A[%d]: ",i);
        scanf("%lf",&vetorA[i]);
    }
    for(j=0;j<N;j++) {
        printf("Digite os valores do vetor B[%d]: ",j);
        scanf("%lf",&vetorB[j]);
    }
    for (k=0;k<N;k++) {
        vetorC[k] = vetorA[k] + vetorB[k];
        printf("Vetor C[%d]: %.2lf\n",k,vetorC[k]);
    }

    return 0;
}