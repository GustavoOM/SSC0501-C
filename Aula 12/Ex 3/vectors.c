#include <stdio.h>
int main(){
    void vectors(int *vet);
    int a[20];
    for(int i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    vectors(a);
}

void vectors(int *vet){
    for(int i = 0; i < 20; i++)
        if(vet[i]%2==0)
            printf("%d ", vet[i]);
    printf("\n");
    for(int i = 0; i < 20; i++)
        if(vet[i]%2==1)
            printf("%d ", vet[i]);
    printf("\n");
}