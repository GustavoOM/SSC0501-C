#include <stdio.h>
#include <string.h>
#include "../CarStruct.c"

int main(){
    FILE *bf;
    struct CarStruct cars[5];

    if((bf = fopen("../Ex 5/registros.txt", "rb+")) == NULL){
        printf("\nErro ao abrir o arquivo.\n");
        return 0;
    }

    fseek(bf,0,SEEK_SET);
    fread(cars, sizeof(struct CarStruct), 5, bf);

    for(int i = 0; i < 5; i++){
        if(cars[i].preco>=20000){
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Modelo: %s\n", cars[i].modelo);
            printf("Cor: %s\n", cars[i].cor);
            printf("Preço: R$%.2f\n", cars[i].preco);
        }
    }

    fclose(bf);


}