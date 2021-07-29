#include <stdio.h>

int ehPrimo(int num);

int main(){
    int x;
    scanf("%d",&x);
    for(int i = 1; i <= x; i++){
        for(int j = 1; j < i; j++)
            if(ehPrimo(j))
                if(i%j==0 && i%(j*j)==0)
                    printf("%d ",i);
    }
}

int ehPrimo(int num){
    if(num == 0 || num == 1)
        return 0;
    if(num==2)
        return 1;
    for(int i = 2; i < num; i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}