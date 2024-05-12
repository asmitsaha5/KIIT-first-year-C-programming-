#include<stdio.h>
void main()
{
int n,i,j;
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
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
arr[i]=arr[i]^arr[j];
arr[j]=arr[i]^arr[j];
arr[i]=arr[i]^arr[j];
}
}
}
printf("The array in ascending order:");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
