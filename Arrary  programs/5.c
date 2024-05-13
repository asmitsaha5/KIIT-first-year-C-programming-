#include<stdio.h>
void main()
{
int n,i,num,pos;
printf("Enter value of n:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
arr[i]=i+1;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
printf("Enter the number to insert:");
scanf("%d",&num);
printf("Enter the position:");
scanf("%d",&pos);
if(pos<0 || pos>n)
printf("Invaild position\n");
else
{
for(i=pos;i<=n;i++)
arr[i]=i;
}
arr[pos-1]=num;
n++;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
