#include <stdio.h>
int main(){
    int m[5][5], temp[5];
    for(int i = 0; i < 5; i++)
        scanf("%d %d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4]);

    for(int i = 0; i < 5; i++)
        temp[i] = m[2][i];

    for(int i = 0; i < 5; i++)
        m[2][i] = m[i][2];
    
    for(int i = 0; i < 5; i++)
        m[i][2] = temp[i];

    for(int i = 0; i < 5; i++)
        printf("%d %d %d %d %d\n", m[i][0], m[i][1], m[i][2], m[i][3], m[i][4]);

    printf("\n");
}