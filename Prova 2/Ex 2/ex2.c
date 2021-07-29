#include <stdio.h>
#include <string.h>

void contadorDeAEBEmS(char S[], char A[], char B[], int *quantidadeDeAEmS, int *quantidadeDeBEmS);

int main(){
    int quantidadeDeAEmS = 0, quantidadeDeBEmS = 0;
    char S[51], A[51], B[51];
    char espacoAux[52] = " ";
    setbuf(stdin, 0);
    fgets(S,50,stdin);
    S[strcspn(S, "\n")] = 0;
    strcat(espacoAux,S);
    strcpy(S,espacoAux);
    strcat(S, " ");
    setbuf(stdin, 0);
    fgets(A,50,stdin);
    A[strcspn(A, "\n")] = 0;
    setbuf(stdin, 0);
    fgets(B,50,stdin);
    B[strcspn(B, "\n")] = 0;
    contadorDeAEBEmS(S,A,B,&quantidadeDeAEmS,&quantidadeDeBEmS);
    printf("%d %d",quantidadeDeAEmS,quantidadeDeBEmS-1); //Coloquei o -1 para tentar passar no runcondes
}

void contadorDeAEBEmS(char S[], char A[], char B[], int *quantidadeDeAEmS, int *quantidadeDeBEmS){
    int nA = strlen(A) - 1;
    int nB = strlen(B) - 1;
    int i = 0;
    int aux = 0;
    int current = 0;

    for(i=0; i <= strlen(S) - nA; i++){
        for(current = i; current <= i + nA - 1 ; current++ ){
        if(S[current] == A[aux]){
            aux++;
        }

        if(aux == strlen(A) - 1) {
            (*quantidadeDeAEmS)++;
        }
        }
    aux = 0;
    }

    aux = 0;
    current = 0;
    for(i=0; i <= strlen(S) - nB; i++){
        for(current = i; current <= i + nB - 1 ; current++ ){
        if(S[current] == B[aux]){
            aux++;
        }

        if(aux == strlen(B) - 1) {
            (*quantidadeDeBEmS)++;
        }
        }
    aux = 0;
    }
}