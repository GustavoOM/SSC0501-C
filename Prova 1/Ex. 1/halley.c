#include <stdio.h>
int main(){
    int baseYear = 1986;
    int halleyTime = 76;
    int targetYear;
    scanf("%d", &targetYear);
    while (baseYear < targetYear){
        baseYear += halleyTime;
    }
    printf("%d\n",baseYear);
}