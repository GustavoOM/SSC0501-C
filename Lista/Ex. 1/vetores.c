#include <stdio.h>
#include <stdlib.h>

void somaVetores(int vetorA[], int vetorB[], int vetorSoma[], int quantidadeDeElementos);
void leVetor(int vetor[], int quantidadeDeElementos);

int main(){
    int quantidadeDeElementos, *vetorA, *vetorB, *vetorSoma;
    printf("Quantidade de elementos: ");
    scanf("%d",&quantidadeDeElementos);
    vetorA = (int*) calloc(quantidadeDeElementos,sizeof(int));
    vetorB = (int*) calloc(quantidadeDeElementos,sizeof(int));
    vetorSoma = (int*) calloc(quantidadeDeElementos,sizeof(int));
    printf("\nVetor A: ");
    leVetor(vetorA, quantidadeDeElementos);
    printf("Vetor B: ");
    leVetor(vetorB, quantidadeDeElementos);
    somaVetores(vetorA,vetorB,vetorSoma, quantidadeDeElementos);
}

void somaVetores(int vetorA[], int vetorB[], int vetorSoma[], int quantidadeDeElementos){
    for(int i = 0; i < quantidadeDeElementos; i++){
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }
    printf("\nVetor A: [");
    for (int i = 0; i < quantidadeDeElementos-1; i++){
        printf("%d,",vetorA[i]);
    }
    printf("%d]\n",vetorA[quantidadeDeElementos-1]);
    printf("Vetor B: [");
    for (int i = 0; i < quantidadeDeElementos-1; i++){
        printf("%d,",vetorB[i]);
    }
    printf("%d]\n",vetorB[quantidadeDeElementos-1]);
    printf("Vetor Soma: [");
    for (int i = 0; i < quantidadeDeElementos-1; i++){
        printf("%d,",vetorSoma[i]);
    }
    printf("%d]\n",vetorSoma[quantidadeDeElementos-1]);
}

void leVetor(int vetor[], int quantidadeDeElementos){
    for(int i = 0; i < quantidadeDeElementos; i++)
        scanf("%d", &vetor[i]);
}