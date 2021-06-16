#include <stdio.h>

void endProgram(){
    printf("\n");
}

int main()
{
    float kilometer, liters;
    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometer);
    printf("Enter the number of liters consumed: ");
    scanf("%f", &liters);

    if(kilometer <= 0 || liters <= 0){
        printf("Enter numbers biggers than zero!");
        endProgram();
    }

    float kilometersPerLiters = kilometer / liters;

    if(kilometersPerLiters < 8){
        printf("km/L = %.2f\nSell your car!", kilometersPerLiters);
    } else if(kilometersPerLiters > 12){
        printf("km/L = %.2f\nSuper economic car!", kilometersPerLiters);
    } else {
       printf("km/L = %.2f\nEconomic car!", kilometersPerLiters); 
    }
    
    endProgram();
}
