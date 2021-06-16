#include <stdio.h>
#include <math.h>

double distance(double x1, double x2, double y1, double y2);

int main(){
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%lf\n",distance(x1, x2, y1, y2));
}

double distance(double x1, double x2, double y1, double y2){
    double xr;
    if(x1 > x2)
        xr = x1 - x2;
    else 
        xr = x2 - x1;

    double yr;
    if(y1 > y2)
        yr = y1 - y2;
    else 
        yr = y2 - y1;

    return sqrt(xr*xr+yr*yr);
}
