#include<stdio.h>
void main()
{
int n;
printf("Enter the value for n:\n");
scanf("%d",&n);
printf("The natural numbers from %d to 1:\n",n);
for(int i=n;i>=1;i--)
{
printf("%d\n",i);
}
printf("\n");
}
