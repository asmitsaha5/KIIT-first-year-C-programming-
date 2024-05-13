#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    a = a + b - ( b = a );
    printf(" a = %d, b = %d",a,b); 
}
