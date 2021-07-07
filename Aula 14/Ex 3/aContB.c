#include <stdio.h>
int main(){
    int countChars(char word[]);
    int xContemY (char x[], char y[]);

    char a[100], b[100];
    int xInY;

    scanf("%s",&a);
    scanf("%s",&b);

    if(countChars(a)>=countChars(b)){
        xInY = xContemY(a,b);
        if(xInY)
            printf("A palavra %s está contida na palavra %s!\n",b,a);
        else
            printf("A palavra %s não está contida na palavra %s!\n",b,a);
    }
    else{
        xInY = xContemY(b,a);
        if(xInY)
            printf("A palavra %s está contida na palavra %s!\n",a,b);
        else
            printf("A palavra %s não está contida na palavra %s!\n",a,b);
    }


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