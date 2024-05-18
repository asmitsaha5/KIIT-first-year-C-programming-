#include<stdio.h>
void main()
{
int n,i,s=0;
printf("Enter value of n:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter number %d:",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]>s)
s=arr[i];
else
s=s;
}
printf("Largest element stored in the array = %d\n",s);
}
