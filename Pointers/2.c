#include<stdio.h>
void swap(int*n1,int*n2)
{
int temp=*n1;
*n1=*n2;
*n2=temp;
}
void main()
{
int a,b;
printf("Enter the number a:");
scanf("%d",&a);
printf("Enter the number b:");
scanf("%d",&b);
swap(&a,&b);
printf("The final value of a = %d\nThe final value of b = %d\n",a,b);
}
