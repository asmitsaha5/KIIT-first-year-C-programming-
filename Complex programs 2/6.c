#include<stdio.h>
void main()
{
int n1,n2,i;
printf("Enter the size of first array:");
scanf("%d",&n1);
printf("Enter the size of second array:");
scanf("%d",&n2);
int arr1[n1],arr2[n2];
printf("Enter the first array:");
for(i=0;i<n1;i++)
scanf("%d",&arr1[i]);
printf("Enter the second array:");
for(i=0;i<n2;i++)
scanf("%d",&arr2[i]);
arr1[n1+n2];
printf("The new array is:");
for(i=0;i<(n1+n2);i++)
{
if(i<n1)
printf("%d ",arr1[i]);
else
printf("%d ",arr2[i-n1]);
}
printf("\n");
}
