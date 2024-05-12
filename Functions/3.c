#include<stdio.h>
void factorial(int a)
{
int i,f=1;
for(i=2;i<=a;i++)
f*=i;
printf("The factorial of %d = %d\n",a,f);
}
void main()
{
int x;
printf("Enter value of x:");
scanf("%d",&x);
factorial(x);
}
