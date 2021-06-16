#include <stdio.h>

int main(){
    int x, y, baseX;
    scanf("%d %d", &x, &y);
    baseX = x;
    for (int i = 1; i < y; i++)
        x *= baseX;
    printf("%d\n",x);    
}