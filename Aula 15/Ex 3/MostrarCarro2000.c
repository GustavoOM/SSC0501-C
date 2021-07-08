#include "../Ex 1/Carro.c"
#include "stdio.h"
#include "string.h"

int turnBellow2000in2000 (int ano);
char * turnChevroletInGM (char fabricante[]);
void turnBellow2000in2000AndTurnChevroletInGM (struct carros *x);

int main(){

    struct carros c;
    printf("Modelo: ");
    fgets(c.modelo,100,stdin);
    printf("Fabricante: ");
    fgets(c.fabricante,100,stdin);
    printf("Cor: ");
    fgets(c.cor,100,stdin);
    printf("Ano: ");
    scanf("%d",&c.ano);
    printf("Preço: ");
    scanf("%f",&c.preco);

    //Por parametro
    c.ano = turnBellow2000in2000(c.ano);
    strcpy(c.fabricante,turnChevroletInGM(c.fabricante));
    
    //Por ponteiro
    turnBellow2000in2000AndTurnChevroletInGM(&c);

    printf("\n=-=-=-=-=-=-=-=-=-=-=-==-=\n");

    printf("Modelo: %s",c.modelo);
    printf("Fabricante: %s",c.fabricante);
    printf("Cor: %s",c.cor);
    printf("Ano: %d\n",c.ano);
    printf("Preço: R$%.2f\n",c.preco);
}

int turnBellow2000in2000 (int ano){
    if(ano < 2000)
        return 2000;
    return ano;
}

char * turnChevroletInGM (char fabricante[]){
    if(strcmp(fabricante, "Chevrolet\n") == 0 || strcmp(fabricante, "chevrolet\n") == 0 || strcmp(fabricante, "CHEVROLET\n")  == 0)
        strcpy(fabricante,"GM\n");
    return fabricante;
}


void turnBellow2000in2000AndTurnChevroletInGM (struct carros *x){
    if(x->ano < 2000)
        x->ano = 2000;
    if(strcmp(x->fabricante, "Chevrolet\n") == 0 || strcmp(x->fabricante, "chevrolet\n") == 0 || strcmp(x->fabricante, "CHEVROLET\n") == 0)
        strcpy(x->fabricante,"GM\n");
}