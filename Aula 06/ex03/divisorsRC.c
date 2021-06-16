#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x/2; i++)
        if(x%i==0)
            printf("%d ",i);
    printf("%d ",x);
    printf("\n");
}