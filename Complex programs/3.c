#include<stdio.h>
void main()
{
int i,j,m;
printf("Enter the no. of rows or columns:");
scanf("%d",&m);
int arr[m][m];
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
printf("Enter a%d%d:",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
printf("The left diagonal of the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if(i==j)
printf("%d	",arr[i][j]);
else
printf(" 	");
}
printf("\n");
}
printf("The right diagonal of the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if((i+j)==(m-1))
printf("%d	",arr[i][j]);
else
printf(" 	");
}
printf("\n");
}
}
