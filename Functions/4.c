#include<stdio.h>
void prime(int n)
{
int i,s=0;
for(i=2;i<n;i++)
{
if(n%i==0)
s+=i;
}
if(s==0)
printf("Entered number is a prime number\n");
else
printf("Entered number is not a prime number\n");
}
void main()
{
int x;
printf("Enter the number:");
scanf("%d",&x);
prime(x);
}
