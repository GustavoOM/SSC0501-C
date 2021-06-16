#include <stdio.h>

int main(){
    float value, total = 0, low = 0, high = 0;
    do{
        scanf("%f", &value);
        if(value < 0)
            break;
        else{
            total += value;
            if (value < 5)
                low++;
            else
                high++;
        }
    }while (1);

    printf("%.0f %.0f %f %f", high, low, total/(low+high), 100*high/(high + low));

    return 0;
}