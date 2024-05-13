#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,n,i,sum=0;
printf("Enter the size of array:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
printf("Enter the array:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
sum+=arr[i];
}
printf("The sum of the array = %d\n",sum);
free(arr);
}
