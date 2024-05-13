#include<stdio.h>
void main()
{
int n,i,j,x,d=0;
printf("Enter the value of n:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter the element %d:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
x=arr[j];
arr[j]=arr[i];
arr[i]=x;
}
}
}
for(i=0;i<(n-1);i++)
{
if(arr[i]==arr[i+1])
d++;
else
d+=0;
}
if(d>0)
printf("Duplicate found\n");
int array[n-d];
int a=0;
for(i=0;i<n;i++)
{
if(arr[i]==arr[i+1])
array[a]=arr[i+1];
else
{
array[a]=arr[i];
a++;
}
}
for(i=0;i<(n-d);i++)
printf("%d ",array[i]);
printf("\n");
}
