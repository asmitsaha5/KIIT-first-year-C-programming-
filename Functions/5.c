#include<stdio.h>
void fibonacci(int n)
{
int num1=0,num2=1,next,i;
for(i=1;i<=n;i++)
{
if(i==1)
next=num1;
else if(i==2)
next=num2;
else
{
next=num1+num2;
num1=num2;
num2=next;
}
}
printf("The %dth term of the fibonacci series = %d\n",n,next);
}
void main()
{
int x;
printf("Enter value of x:");
scanf("%d",&x);
fibonacci(x);
}
