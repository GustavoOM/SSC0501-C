#include <stdio.h>
#include <string.h>

typedef struct{ char nome[20]; int avaliacao; int ano;} filme;

int main(){
    FILE *arquivo;
    filme listaDeFilmes[5];

    strcpy(listaDeFilmes[0].nome,"Piratas do Caribe 3");
    listaDeFilmes[0].avaliacao = 5;
    listaDeFilmes[0].ano = 2001;
    
    strcpy(listaDeFilmes[1].nome,"Piratas do Caribe 2");
    listaDeFilmes[1].avaliacao = 4;
    listaDeFilmes[1].ano = 1992;

    strcpy(listaDeFilmes[2].nome,"Carros 2");
    listaDeFilmes[2].avaliacao = 5;
    listaDeFilmes[2].ano = 1999;

    strcpy(listaDeFilmes[3].nome,"Carros 3");
    listaDeFilmes[3].avaliacao = 5;
    listaDeFilmes[3].ano = 2021;

    strcpy(listaDeFilmes[4].nome,"Up");
    listaDeFilmes[4].avaliacao = 5;
    listaDeFilmes[4].ano = 2000;

    if((arquivo = fopen("filmes.dat", "wb+")) == NULL)
        return 0;
    fwrite(listaDeFilmes,sizeof(filme), 5, arquivo);
    fclose(arquivo);
}
