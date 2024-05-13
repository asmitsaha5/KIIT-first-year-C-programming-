#include<stdio.h>
void main()
{
int n,i,j,count,x=0;
float sum=0,mean,mode;
printf("Enter the size of array:");
scanf("%d",&n);
float arr[n];
for(i=0;i<n;i++)
{
printf("Enter element %d:",i);
scanf("%f",&arr[i]);
}
for(i=0;i<n;i++)
sum+=arr[i];
mean=sum/n;
printf("Mean of the values = %f\n",mean);
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])	
count++;
}
if(count>x)
{
x=count;
mode=arr[i];
}
}
printf("Mode of the values: %.0f\n",mode);
}
