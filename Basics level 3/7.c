#include <stdio.h>

int main() {
    int w,x,y;
    printf("Enter a six-digit number: \n");
    scanf("%d",&w);
    x=w/100000;
    y=w%10;
    printf("The sum of first and last digit is %d\n", x+y);
}
