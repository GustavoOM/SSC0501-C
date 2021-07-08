#include "../Ex 1/Carro.c"
#include <stdio.h>

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
    
    printf("\n=-=-=-=-=-=-=-=-=-=-=-==-=\n");

    printf("Modelo: %s",c.modelo);
    printf("Fabricante: %s",c.fabricante);
    printf("Cor: %s",c.cor);
    printf("Ano: %d\n",c.ano);
    printf("Preço: R$%.2f\n",c.preco);
}