#include <stdio.h>
int main(){
    for (int i = 1; i < 5000; i++){
        if(i*i>5000)
            break;
        printf("%d ",i*i);
    }
}