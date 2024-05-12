#include<stdio.h>
void main()
{
int i,j,m,n;
printf("Enter no. of rows:");
scanf("%d",&m);
printf("Enter no. of columns:");
scanf("%d",&n);
int arr[m][n];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("a%d%d=",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
int tarr[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
tarr[i][j]=arr[j][i];
}
printf("The transpose matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d	",tarr[i][j]);
}
printf("\n");
}
}
