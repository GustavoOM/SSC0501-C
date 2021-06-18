#include <stdio.h>

int main(){
    void switchValues(int *a, int *b);
    int a, b;
    scanf("%d %d", &a, &b);
    switchValues(&a,&b);
    printf("%d %d", a, b);
}

void switchValues(int *a, int *b){
    int temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}
