#include<stdio.h>
void main()
{
int n,c=0;
printf("enter the number:");
scanf("%d",&n);
int n1=n;
while(n!=0)
{
int p=1;
int a=n%10;
for(int i=1;i<=a;i++)
{
p=p*i;
}
c=c+p;
n=n/10;
}
if(c==n1)
printf("strong number \n");
else
printf("not a strong number \n");
}
