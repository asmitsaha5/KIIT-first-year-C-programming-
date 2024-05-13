#include<stdio.h>
void main()
{
int n,j,i;
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i==1)
j=1;
else
j=(2*j)+1;
printf("%d ",j);
}
}
