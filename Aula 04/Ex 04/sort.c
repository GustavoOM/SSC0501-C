#include <stdio.h>

int main()
{
    int a, b, c;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    if((a >= b) && (a >= c)){
        if (b >= c){
            printf("C -> B -> A = %d -> %d -> %d", c,b,a);
        }else{
            printf("B -> C -> A = %d -> %d -> %d", b,c,a);
        }
    } else if ((b >= a) && (b >= c)){
        if (a >= c){
            printf("C -> A -> B = %d -> %d -> %d", c,a,b);
        }else{
            printf("A -> C -> B = %d -> %d -> %d", a,c,b);
        }
    } else {
        if (a >= b){
            printf("B -> A -> C = %d -> %d -> %d", b,a,c);
        }else{
            printf("A -> B -> C = %d -> %d -> %d", a,b,c);
        }
    }

    printf("\n");
    return 0;
}
