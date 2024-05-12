#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    x = x + y;   
    y = x - y;
    x = x - y;
    printf("New value for x is %d",x);
    printf("New value for y is %d",y);
    }
