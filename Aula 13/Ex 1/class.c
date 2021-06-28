#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float *v, sum=0;
    scanf("%d", &n);
    v = (float*) calloc(n, sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
        sum += v[i];
    }
    printf("%f\n", sum/n);
    free(v);
    return 0;
}
