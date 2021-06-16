#include <stdio.h>

int main()
{
    int n, i = 0, f = 1, sum;
    scanf("%d", &n);

    printf("0 1 ");
    while (1){
        sum = i + f;
        printf("%d ", sum);
        if(sum > n)
            break;
        i = f;
        f = sum;
    }
    

    printf("\n");
    return 0;
}