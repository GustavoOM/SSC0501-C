#include <stdio.h>
#include <string.h>

void contadorDeAEBEmS(char S[], char C[], int *quantidadeDeCEmS);

int main(){
    int quantidadeDeCEmS = 0;
    char S[500], A[25], B[25];
    char C[500] = "";
    FILE *arq;
    if((arq=fopen("texto.txt","r+"))==NULL)
        return 0;

    char auxEspaco[500] = " ";
    char auxLinha[500];
    while (1){
        fgets(auxLinha, 499, arq);
        auxLinha[strcspn(auxLinha, "\n")] = 0;
        strcat(auxEspaco, auxLinha);
        strcpy(S,auxEspaco);
        strcat(S, " ");
        strcat(auxEspaco, " ");
        if(feof(arq))
            break;

    }
    setbuf(stdin, 0);
    fgets(A,24,stdin);
    A[strcspn(A, "\n")] = 0;
    setbuf(stdin, 0);
    fgets(B,24,stdin);
    B[strcspn(B, "\n")] = 0;
    strcat(C,A);
    strcat(C," ");
    strcat(C,B);
    contadorDeAEBEmS(S,C,&quantidadeDeCEmS);
    printf("%d",quantidadeDeCEmS);
    fclose(arq);
}

void contadorDeAEBEmS(char S[], char C[], int *quantidadeDeCEmS){
    for(int i = 0; i <= strlen(S)-strlen(C);i++){
        for(int j = 0; j <= strlen(C); j++){
            if(C[j] == '\0'){
                (*quantidadeDeCEmS)++;
            }
            if(C[j] != S[i+j])
                break;
        }
    }
}