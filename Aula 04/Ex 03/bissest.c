#include <stdio.h>

int main()
{
    
    int year;
    printf("Type the year to see if it is bissest: ");
    scanf("%d", &year);
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("This year is bissest!");
    } else{
        printf("This year isn't bissest!");
    }

    printf("\n");
    return 0;
}
