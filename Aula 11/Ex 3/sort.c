#include <stdio.h>
int main(){
    int vet[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &vet[i]);
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if(vet[i] < vet[j]){
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", vet[i]);
    
    printf("\n");
}