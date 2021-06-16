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

    printf("\nLow than 5: %.0f\nHigh or iqual 5: %.0f\nOverall average: %.2f\nDisapproval percentage: %.0f%%\n", low, high, total/(low+high), 100*low/(high + low));

    return 0;
}