#include <stdio.h>
#include <string.h>
int main(){
    char x[100];
    int words = 1;
    
    //Limpa buffer
    setbuf(stdin, 0);
    fgets(x,99,stdin);

    if(x[0]==' ')
        words--;
    for(int i = 0; i < strlen(x);i++)
        if(x[i] == ' ' && x[i+1] != ' ' && x[i+1] != '\n')
            words++;

    if(strlen(x)==1)
        words = 0;

    printf("%d\n", words);
}