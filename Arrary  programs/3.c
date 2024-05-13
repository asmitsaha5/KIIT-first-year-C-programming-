#include<stdio.h>
void main()
{
int n,i,s=0;
printf("Enter value of n:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter numbber %d:",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
s+=arr[i];
printf("Avarage of the numbers = %d\n",s/n);
}
