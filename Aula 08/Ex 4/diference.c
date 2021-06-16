#include <stdio.h>
int main(){
    int vet[10], dif = 0;
    for(int i = 0; i < 10; i++)
        scanf("%d", &vet[i]);
    for(int i = 1; i < 10; i++)
        if(vet[i] > vet[i-1]){
            if(vet[i]-vet[i-1] > dif)
                dif = vet[i]-vet[i-1];
        }
        else
            if(vet[i-1]-vet[i] > dif)
                dif = vet[i-1]-vet[i];
    printf("%d\n", dif);
}