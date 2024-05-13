#include<stdio.h>
void main()
{
int i,j,arr1[2][2],arr2[2][2];
printf("Enter array 1:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter a%d%d:",i+1,j+1);
scanf("%d",&arr1[i][j]);
}
}
printf("Enter array 2:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter b%d%d:",i+1,j+1);
scanf("%d",&arr2[i][j]);
}
}
int arr[2][2];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
arr[i][j]=arr1[i][j]+arr2[i][j];
}
}
printf("Sum of two matrices:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d	",arr[i][j]);
}
printf("\n");
}
}
