#include<stdio.h>
void main()
{
int i,j,m;
printf("Enter the no. of rows or coolumns:");
scanf("%d",&m);
int arr[m][m];
printf("Enter the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
printf("a%d%d=",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
printf("The upper triangular matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if(i<=j)
printf("%d	",arr[i][j]);
else
printf(" 	");
}
printf("\n");
}
}
