#include<stdio.h>
void main()
{
int x,a,i,c=0;
printf("Enter the number:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{ 
if(x%i==0)
{
a=i;
c=c+1;
}
}
printf("Number of factors= %d\n",c);
if(c==2)
{
printf("The number is prime");
}
else
{
printf("The number is not prime");
}         
}
