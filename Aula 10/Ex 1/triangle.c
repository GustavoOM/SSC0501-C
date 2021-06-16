#include <stdio.h>

float triangleArea(int l, int h);

int main(){
    int l, h;
    scanf("%d %d", &l, &h);
    printf("%f",triangleArea(l, h));
}

float triangleArea(int l, int h){
    return (l * h) / 2.0;
}