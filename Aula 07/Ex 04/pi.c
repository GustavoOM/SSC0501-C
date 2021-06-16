#include <stdio.h>

int main()
{
    int n, op = 1;
    float total = 0;
    scanf("%d",&n);
    
    for (int i = 1; i <= 2*n; i+=2){
        if(op == 1){
            total += 4.0/i;
            op = 0;
        }
        else{
            total -= 4.0/i;
            op = 1;
        }
        
    }
    
    printf("%f\n",total);
    return 0;
}