#include <stdio.h>
int main(){
    int m[5][5], a, b, cont = 0;
    for(int i = 0; i < 5; i++)
        scanf("%d %d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4]);

    scanf("%d %d", &a, &b);

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(m[i][j] >= a && m[i][j] <= b)
                cont++;

    printf("%d\n", cont);
}