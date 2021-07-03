#include <stdio.h>
#include <string.h>
int main(){
    char x[100], c;
    fgets(x,100,stdin);
    scanf("%c",&c);
    for(int i = 0; i < strlen(x);i++)
        if(x[i]!=c)
            printf("%c",x[i]);
}