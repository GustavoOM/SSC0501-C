#include <stdio.h>
#include <string.h>
#include "../CarStruct.c"

int main(){
    FILE *bf;
    struct CarStruct cars[5];
    for(int i = 0; i < 5; i++){
        printf("Digite o modelo do %dº carro: ", i + 1);
        setbuf(stdin, 0);
        fgets(cars[i].modelo, 49, stdin);
        cars[i].modelo[strcspn(cars[i].modelo, "\n")] = 0;

        printf("Digite a cor do %dº carro: ", i + 1);
        setbuf(stdin, 0);
        fgets(cars[i].cor, 29, stdin);
        cars[i].cor[strcspn(cars[i].cor, "\n")] = 0;

        printf("Digite o preço do %dº carro: ", i + 1);
        scanf("%f",&cars[i].preco);

        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }

    if((bf = fopen("registros.txt", "wb+")) == NULL){
        printf("\nErro ao abrir o arquivo.\n");
        return 0;
    }

    fwrite(cars, sizeof(struct CarStruct), 5, bf);

    fclose(bf);


}