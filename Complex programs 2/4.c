#include<stdio.h>
void main()
{
int n,i,j=0;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter the element %d:",i);
scanf("%d",&arr[i]);
}
int array[n];
for(i=0;i<n;i++)
{
if(arr[i]<0)
{
array[j]=arr[i];
j++;
}
}
for(i=0;i<n;i++)
{
if(arr[i]>=0)
{
array[j]=arr[i];
j++;
}
}
printf("The new array:");
for(i=0;i<n;i++)
printf("%d ",array[i]);
printf("\n");
}

