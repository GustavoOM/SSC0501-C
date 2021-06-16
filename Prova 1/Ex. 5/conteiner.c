#include <stdio.h>
int main(){
    float a, b, c, x, y, z;
    int contA = 0, contB = 0, contC = 0;
    scanf("%f %f %f", &x, &y, &z);
    scanf("%f %f %f", &a, &b, &c);
    float aBase = a, bBase = b, cBase = c;
    while (a <= x){
        a += aBase;
        contA++;
    }
    while (b <= y){
        b += bBase;
        contB++;
    }
    while (c <= z){
        c += cBase;
        contC++;
    }
    printf("%d\n", contA*contB*contC);
}