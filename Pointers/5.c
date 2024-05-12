#include<stdio.h>
void main()
{
int n,x,*i,*j,*ptr;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:\n");
for(x=0;x<n;x++)
scanf("%d",&arr[x]);
ptr=arr;
for(i=ptr;i<ptr+n;i++)
{
for(j=i+1;j<ptr+n;j++)
{
if(*i>*j)
{
int temp=*i;
*i=*j;
*j=temp;
}
}
}
printf("The final array:\n");
for(i=ptr;i<ptr+n;i++)
printf("%d ",*i);
printf("\n");
}
