#include<stdio.h>
void main()
{
int x,y,*a,*b,p;
printf("Enter two numbers:\n");
scanf("%d%d",&x,&y);
a=&x;
b=&y;
p=(*a**b);
printf("Product of two numbers = %d\n",p);
}
