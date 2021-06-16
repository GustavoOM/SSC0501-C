#include <stdio.h>
int main(){
    int m[4][5], sum[5] = {0,0,0,0,0};
    for(int i = 0; i < 4; i++){
        scanf("%d %d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4]);
        sum[0] += m[i][0];
        sum[1] += m[i][1];
        sum[2] += m[i][2];
        sum[3] += m[i][3];
        sum[4] += m[i][4];
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", sum[i]);

    printf("\n");
}