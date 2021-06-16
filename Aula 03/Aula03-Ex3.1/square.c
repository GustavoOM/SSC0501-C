#include <stdio.h>

int main()
{
    float square_side;
    printf("Enter the size of the square side: ");
    scanf("%f", &square_side);
    printf("Area: %.2f\nPerimeter: %.2f", (square_side*square_side), (square_side*4));
    printf("\n");
    return 0;
}
