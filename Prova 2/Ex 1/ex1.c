#include <stdio.h>
#include <stdlib.h>

void alocarEmVet2(int VET1[], int VET2[], int x);

int main(){
    int VET1[10], *VET2, x, contadorDeXemVet = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &VET1[i]);
    scanf("%d", &x);
    for (int i = 0; i < 10; i++)
        if(VET1[i] != x)
            contadorDeXemVet++;
    VET2 = (int *) calloc(contadorDeXemVet, sizeof(int));
    alocarEmVet2(VET1,VET2,x);
    for(int i = 0; i < contadorDeXemVet; i++)
        printf("%d ", VET2[i]);
    free(VET2);
    return 0;
}

void alocarEmVet2(int VET1[], int VET2[], int x){
    int contAux = 0;
    for(int i = 0; i < 10; i++)
        if(VET1[i] != x){
            VET2[contAux] = VET1[i];
            contAux++;
        }
}