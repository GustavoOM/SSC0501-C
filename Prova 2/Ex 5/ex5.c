#include <stdio.h>
#include <string.h>

typedef struct{ char nome[20]; int avaliacao; int ano;} filme;

int main(){
    FILE *arquivo;
    filme listaDeFilmes[5];
    char P[20];
    if((arquivo = fopen("filmes.dat", "rb+")) == NULL)
        return 0;
    
    fseek(arquivo,0,SEEK_SET);
    fread(listaDeFilmes, sizeof(filme), 5, arquivo);
    fclose(arquivo);

    setbuf(stdin, 0);
    fgets(P,19,stdin);
    P[strcspn(P, "\n")] = 0;

    for(int i = 0; i < 5; i++){

        if(listaDeFilmes[i].ano >= 2000 && strstr(listaDeFilmes[i].nome, P) != NULL){
            printf("%s\n", listaDeFilmes[i].nome);
        }
    }
    return 0;
}
