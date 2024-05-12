#include<stdio.h>
void main ()
{
int w,x,y,z;
printf("Enter a three digit number\n");
scanf("%d",&w);
x=w/100;
w%=100;
y=w/10;
z=w%10;
printf("Reverse number is \n%d%d%d\n",z,y,x);
}
