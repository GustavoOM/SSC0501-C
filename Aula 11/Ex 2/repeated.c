#include <stdio.h>

int main(){
    int vet[20];
    int flag, temp;

    scanf("%d", &flag);
    vet[0] = flag;
    for(int i = 1; i < 20; i++){
        scanf("%d", &temp);
        for(int j = 0; j < i; j++){
            if(temp == vet[j]){
                vet[i] = flag;
                break;
            }
            if(i == j+1){
                vet[i] = temp;
            }
        }
    }
    
    printf("%d ", flag);
    for(int i = 1; i < 20; i++){
        if(vet[i] != flag)
            printf("%d ", vet[i]);
    }
    printf("\n");

}