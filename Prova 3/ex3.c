#include <stdio.h>

void organizarVetor(int vet1[], int vet2[], int vetFinal[]);

int main(){
    int vet1[10], vet2[10], vetFinal[20];
    for(int i = 0; i < 10; i++)
        scanf("%d",&vet1[i]);
    for(int i = 0; i < 10; i++)
        scanf("%d",&vet2[i]);
    organizarVetor(vet1,vet2,vetFinal);
    for(int i = 0; i < 20; i++)
        printf("%d ", vetFinal[i]);
}

void organizarVetor(int vet1[], int vet2[], int vetFinal[]){
    int aux1 = 0, aux2 = 0;
    while(aux1 < 10 || aux2 < 10){
        if(aux1 == 10){
            vetFinal[aux1 + aux2] = vet2[aux2];
            aux2 ++;
        }
        else if(aux2 == 10){
            vetFinal[aux1 + aux2] = vet1[aux1];
            aux1 ++;
        }
        else if(vet1[aux1] < vet2[aux2]){
            vetFinal[aux1 + aux2] = vet1[aux1];
            aux1 ++;
        }
        else{
            vetFinal[aux1 + aux2] = vet2[aux2];
            aux2 ++;
        }
    }
}
