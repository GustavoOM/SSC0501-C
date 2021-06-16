#include <stdio.h>

int main()
{
    float num1, num2, media;
    printf("Digite 2 numeros: ");
    scanf("%f %f", &num1, &num2);
    media = (num1 + num2) / 2;
    printf("Media: %.2f", media);
    printf("\n");
    return 0;
}
