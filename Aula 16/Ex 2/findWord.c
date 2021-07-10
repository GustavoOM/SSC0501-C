#include <stdio.h>
#include <string.h>

int xContemY (char x[], char y[]);
int countChars(char word[]);

int main(){
    FILE *arq;
    char palavra[500], fraseLida[500];

    if((arq=fopen("text.txt","r+"))==NULL)
        printf("\nErro ao abrir o arquivo.\n");

    printf("Digite uma palavra: ");
    setbuf(stdin, 0);
    fgets(palavra,499,stdin);
    palavra[strcspn(palavra, "\n")] = 0;
    
    fseek(arq,0,SEEK_SET);
    fgets(fraseLida, 499, arq);  

    if(xContemY(fraseLida,palavra)){
        printf("Palavra encontrada!\n");
    }
    else{
        printf("Palavra não encontrada!\n");
    }   
    
    fclose(arq);
}

int countChars(char word[]){
    int count = 0;
    while(1){
        if(word[count] == '\0')
            return count;
        count++;
    }
}

int xContemY (char x[], char y[]){
    printf("Todas palavras: %s\n",x);
    for(int i = 0; i <= countChars(x)-countChars(y);i++){
        for(int j = 0; j <= countChars(y); j++){
            if(y[j] == '\0')
                return 1;
            if(y[j] != x[i+j])
                break;
        }
    }
    return 0;
}