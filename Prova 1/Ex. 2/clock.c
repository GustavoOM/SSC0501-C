#include <stdio.h>
int main(){
    float a[2];
    float b[2];

    scanf("%f %f %f %f", &a[0], &a[1], &b[0], &b[1]);

    float c[2];
    c[0] = (b[0] - a[0])*30;
    c[1] = (b[1] - a[1])*0.5;

    float grau = c[0]+c[1];

    if(grau < 0)
        grau = grau * -1;

    if(grau > 180)
        grau = 360 - grau;
    printf("%f", grau);


}