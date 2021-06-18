#include <stdio.h>

int main(){
    int v[10], *maior, *menor;
    for(int i = 0; i < 10; i++)
        scanf("%d", &v[i]);
    maior[0] = v[0];
    menor[0] = v[0];
    for(int i = 1; i < 10; i++){
        if(v[i] > maior[0])
            maior[0] = v[i];
        if(v[i] < menor[0])
            menor[0] = v[i];
    }
    printf("%d %d", maior[0], menor[0]);
}