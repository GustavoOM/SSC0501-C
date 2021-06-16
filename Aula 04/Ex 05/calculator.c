#include <stdio.h>

int main(){
    int a, b;
    char op;
    scanf("%d", &a);
    scanf("%s", &op);
    scanf("%d", &b);

    switch (op)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
        break;
    }

    printf("\n");
}