#include <stdio.h>
#include <string.h>

typedef struct{ char nome[20]; int avaliacao; int ano;} filme;

int alocaAEmBQuandoAnoMaiorQue2000(filme vetorA[], filme vetorB[]);
void zeraVetor(filme vetor[]);

int main(){
    filme vetorA[5], vetorB[5];
    int quantidadeDeElementosDeBComAnoMaiorQue2000 = 0;
    zeraVetor(vetorA);
    for(int i = 0; i < 5; i++){
        setbuf(stdin, 0);
        fgets(vetorA[i].nome,24,stdin);
        vetorA[i].nome[strcspn(vetorA[i].nome, "\n")] = 0;
        scanf("%d",&vetorA[i].avaliacao);
        scanf("%d",&vetorA[i].ano);
    }
    zeraVetor(vetorB);
    quantidadeDeElementosDeBComAnoMaiorQue2000 = alocaAEmBQuandoAnoMaiorQue2000(vetorA, vetorB);
    for(int i = 0; i < quantidadeDeElementosDeBComAnoMaiorQue2000; i++){
        printf("%s\n",vetorB[i].nome);
    }
}

void zeraVetor(filme vetor[]){
    for(int i = 0; i < 5; i++){
        vetor[i].ano = -1;
        vetor[i].avaliacao = -1;
        strcpy(vetor[i].nome, "");
    }
}

int alocaAEmBQuandoAnoMaiorQue2000(filme vetorA[], filme vetorB[]){
    int contadorMaior2000 = 0;
    for(int i = 0; i < 5; i++)
        if(vetorA[i].ano >= 2000){
            vetorB[contadorMaior2000] = vetorA[i];
            contadorMaior2000++;
        }
    return contadorMaior2000;
}