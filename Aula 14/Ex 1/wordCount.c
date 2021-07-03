#include <stdio.h>
#include <string.h>
int main(){
    char x[100];
    int words = 1;
    
    //Limpa buffer
    setbuf(stdin, 0);
    fgets(x,100,stdin);

    for(int i = 0; i < strlen(x);i++)
        //if(strcmp(x[i], ' ') == 0) 
        if(x[i] == ' ' && x[i+1] != ' ')
            words++;

    if(strlen(x)==1)
        words = 0;

    printf("%d\n", words);
}