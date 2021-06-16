#include <stdio.h>
int main(){
    int n, divisors = 1;
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
        if(n%i==0)
            divisors += i;
    if(divisors == n)
        printf("1");
    else 
        printf("0");

    printf("\n");
}
