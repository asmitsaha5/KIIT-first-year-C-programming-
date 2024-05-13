#include<stdio.h>
void main()
{
int n,i,j,s,x=0;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter the element %d:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
s=0;
for(j=1;j<arr[i];j++)
{
if(arr[i]%j==0)
s+=j;
}
if(s==1)
{
arr[x]=arr[i];
x++;
}
}
for(i=0;i<x;i++)
printf("%d ",arr[i]);
printf("\n");
}
