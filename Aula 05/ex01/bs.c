#include <stdio.h>

int main(){
    int value, bigger, smaller;
    bigger = -1;
    do{
        scanf("%d", &value);
        if(bigger == -1){
            if(value == -1){
                printf("No values ​​were reported\n");
                return 0;
            }
            bigger = value;
            smaller = value;
        } else {
            if(value == -1){
                break;
            }
            
            if(value > bigger)
                bigger = value;
            
            if(value < smaller)
                smaller = value;
        }
    }while (value >= 0);

    printf("\nSmaller: %d\nBigger: %d\n", smaller, bigger);

    return 0;
}