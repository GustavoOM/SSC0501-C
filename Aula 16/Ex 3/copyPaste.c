#include <stdio.h>
#include <string.h>

int main(){
    FILE *arqOrigem, *arqDestino;
    char origem[100], destino[100], dados[500], aux[500];

    printf("Digite o nome do arquivo de origem que deseja copiar (com extenção): ");
    setbuf(stdin, 0);
    fgets(origem,99,stdin);
    origem[strcspn(origem, "\n")] = 0;

    if((arqOrigem=fopen(origem,"r+"))==NULL)
        printf("\nErro ao abrir o arquivo de origem.\n");
    
    else{
        printf("\nDigite o nome do arquivo de destino que deseja colar (com extenção): ");
        setbuf(stdin, 0);
        fgets(destino,99,stdin);
        destino[strcspn(destino, "\n")] = 0;
        
        if((arqDestino=fopen(destino,"w+"))==NULL)
            printf("\nErro ao abrir o arquivo de destino.\n");

        else{
            fseek(arqOrigem,0,SEEK_SET);
            
            while (!feof(arqOrigem)){
                fgets(aux, 499, arqOrigem);
                strcat(dados,aux);
            }
            
            fseek(arqDestino,0,SEEK_SET);
            fprintf(arqDestino,"%s",dados);
        }


        fclose(arqOrigem);
        fclose(arqDestino);

    }
}