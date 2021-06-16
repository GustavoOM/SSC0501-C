#include <stdio.h>

int main()
{
    int base_number, triple_of_base_number, double_of_base_number;
    printf("Enter the base number: ");
    scanf("%d", &base_number);
    triple_of_base_number = base_number * 3;
    printf("This is your triple: %d\n", triple_of_base_number);
    double_of_base_number = base_number * 2;
    printf("And this is your double: %d\n", double_of_base_number);
    printf("if we sum yours (triple + 1) to yours (double - 1), we gotta: %d\n", (triple_of_base_number + 1) + (double_of_base_number - 1));
    return 0;
}
