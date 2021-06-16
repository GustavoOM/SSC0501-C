#include<stdlib.h>
#include<stdio.h>

int main(){

int i, x, y, soma, sum;

scanf("%d", &x);

scanf("%d", &y);

 if (x == 0 && y == 0){printf("%d", x); return 0;}
 else if (x < 0 || y < 0){return 0;}


if (x !=0 && x < y){
for ( x = x; x <= y; x++){
        soma = y + x;
        sum = sum + x;}

                                  printf("%d", sum);
}


else if (x !=0 && x > y){

                        for ( y = y; y <= x; y++){
                        soma = y + x;
                        sum = sum + y;}
printf("%d", sum);
}
else if (x == 0 && y != 0){

                        for ( x = x; x <= y; x++){
                        soma = y + x;
                        sum = sum + x;}
printf("%d", sum);}

else if (y == 0 && x != 0){

                        for ( y = y; y <= x; y++){
                        soma = y + x;
                        sum = sum + y;}
printf("%d", sum);}
}