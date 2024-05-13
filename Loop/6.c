#include<stdio.h>
void main()
{
int numbers[10];
int sum=0;
printf("Enter the 10 different numbers:\n");
for (int i=0;i<10;i++)
{
printf("Enter number %d:\n",i+1);
scanf("%d",&numbers[i]);
sum+=numbers[i];
}
double average=(double)sum /10;
printf("\nSum of the numbers:%d\n",sum);
printf("Average of the numbers:%.2lf\n",average);
}
