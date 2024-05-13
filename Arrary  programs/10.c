#include<stdio.h>
void main()
{
int n,i,x;
printf("Enter value of n:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter the element %d:",i);
scanf("%d",&arr[i]);
}
printf("Enter the position where to delete:");
scanf("%d",&x);
for(i=x;i<n;i++)
arr[i]=arr[i+1];
printf("The final array is\n");
for(i=0;i<(n-1);i++)
printf("%d ",arr[i]);
printf("\n");
}
