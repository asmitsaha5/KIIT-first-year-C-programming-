#include<stdio.h>
void sum(int a,int b)
{
	int c=a+b;
	printf("Sum of %d & %d is %d\n",a,b,c);
}
void main()
{
	int x,y;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	sum(x,y);
}

