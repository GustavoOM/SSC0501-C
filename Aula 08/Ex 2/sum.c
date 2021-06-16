#include <stdio.h>
int main(){
    int vet[10], sum = 0;
    for(int i = 0; i < 10; i++)
        scanf("%d", &vet[i]);
    for(int i = 1; i < 10; i++)
        if(i%2==1)
            sum += vet[i];
    printf("%d\n",sum);
}