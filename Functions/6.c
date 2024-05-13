#include<stdio.h>
void swap(int a,int b)
{
a= a^b;
b= a^b;
a =a^b;
printf("The final value of a is = %d\nThe final value of b is = %d\n",a,b);
}
void main()
{
int x,y;
printf("Enter the value of a:");
scanf("%d",&x);
printf("Enter the value of b:");
scanf("%d",&y);
swap(x,y);
}
