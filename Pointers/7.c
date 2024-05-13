#include<stdio.h>
#include<stdlib.h>
int largest(int *arr,int n)
{
int max=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
return max;
}
void main()
{
int *arr,n,i,l;
printf("Enter the size of array:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
l=largest(arr,n);
printf("Largest element = %d\n",l);
free(arr);
}
