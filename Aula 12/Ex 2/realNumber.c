#include <stdio.h>
int main(){
    float n, f;
    scanf("%f", &n);
    f = n -(int)n;
    n = (int)n;
    printf("%.0f %f\n", n, f);
}