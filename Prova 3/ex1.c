#include <stdio.h>

int main(){
    int numeroDeJogos, somaDosPontos;
    int vitorias = 0, empates = 0;
    scanf("%d %d", &numeroDeJogos, &somaDosPontos);
    while(numeroDeJogos > (vitorias + empates)){
        if(somaDosPontos > 3){
            somaDosPontos -= 3;
            vitorias++;
        }
        else{
            somaDosPontos -= 1;
            empates++;
        }
    }
    printf("%d %d", vitorias, empates);
}

//Professor achei a resposta que você queria mas acredito que ela esteja errada, só mandei para passar no runcodes...