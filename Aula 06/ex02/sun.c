#include <stdio.h>

int main(){
    float s=0, i=1, j=1;
    while (i<=50){
        s+= j/i;
        printf("+ %.0f/%.0f = %f\n", j,i,s);
        i++;
        j += 2;
    }
    printf("%f\n", s);
}