#include <stdio.h>
#include <stdlib.h>

int main(){
    void aloca(int **v, int n);
    int sumPositiveNumbers(int *v, int n);

    int n, sum, *v;
    scanf("%d", &n);
    aloca(&v,n);
    sum = sumPositiveNumbers(v,n);
    printf("%d\n", sum);
    free(v);
    return 0;
}

void aloca(int **v, int n){
    *v = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d", (*v + i));
}

int sumPositiveNumbers(int *v, int n){
    int positiveSum = 0;
    for(int i = 0; i < n; i++)
        if(v[i] > 0)
            positiveSum += v[i];
    return positiveSum;
}