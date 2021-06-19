#include <stdio.h>

int main(){
    int v[10], *maior, *menor;
    for(int i = 0; i < 10; i++)
        scanf("%d", &v[i]);
    maior = &v[0];
    menor = &v[0];
    for(int i = 1; i < 10; i++){
        if(v[i] > maior[0])
            maior = &v[i];
        if(v[i] < menor[0])
            menor = &v[i];
    }
    printf("%d %d\n", maior[0], menor[0]);
}