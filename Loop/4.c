#include<stdio.h>
void main()
{
int n;
printf("Enter the value for n:\n");
scanf("%d",&n);
printf("Natural numbers from 1 to %d:\n",n);
for(int i=1;i<=n;i++)
{
printf("%d\n",i);
}
printf("\n");
}
