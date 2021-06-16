#include <stdio.h>

int main(){
    unsigned long int x;
    scanf("%lu",&x);
    printf("The divisors of %lu are: ", x);
    for (int i = 1; i <= x/2; i++)
        if(x%i==0)
            printf("%lu ",i);
    printf("%lu ",x);
    printf("\n");
}