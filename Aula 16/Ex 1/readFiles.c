#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq;
    char frase[500], fraseLida[500];

    if((arq=fopen("text.txt","w+"))==NULL)
        printf("\nErro ao abrir o arquivo.\n");

    printf("Digite uma frase:\n");
    setbuf(stdin, 0);
    fgets(frase,499,stdin);
    frase[strcspn(frase, "\n")] = 0;

    fprintf(arq,"%s",frase);

    fseek(arq,0,SEEK_SET);
    fscanf(arq, "%s", &fraseLida);
    
    printf("\nFrase lida:\n%s\n",fraseLida);
    fclose(arq);
}