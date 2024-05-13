#include <stdio.h>
void main()
{
int s=0;
int n,d;
printf("Enter a number ");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
s=(s*10)+d;
n=n/10;
}
printf("Reverse of the number is=%d",s);
}
