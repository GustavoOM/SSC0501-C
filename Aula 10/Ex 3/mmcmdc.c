#include <stdio.h>

int mmc(int n1, int n2, int n3);
int mdc(int n1, int n2, int n3);

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    printf("%d %d\n", mmc(n1,n2,n3), mdc(n1,n2,n3));
    return 0;
}

int mmc(int n1, int n2, int n3){

    int maior, mmc;

    if(n1 >= n2 && n1 >= n3)
        maior = n1;
    else if(n2 >= n1 && n2 >= n3)
        maior = n2;
    else if(n3 >= n1 && n3 >= n2)
        maior = n3;
    
    for(int i = n1*n2*n3; i >= maior; i--)
        if((i % n1 == 0) && (i % n2 == 0) && (i % n3 == 0))
            mmc = i;

    return mmc;
}

int mdc(int n1, int n2, int n3){
    int menor, mdc;

    if(n1 <= n2 && n1 <= n3)
        menor = n1;
    else if(n2 <= n1 && n2 <= n3)
        menor = n2;
    else if(n3 <= n1 && n3 <= n2)
        menor = n3;

    for(int i = 1; i <= menor; i++)
        if((n1 % i == 0) && (n2 % i == 0) && (n3 % i == 0))
            mdc = i;

    return mdc;
}