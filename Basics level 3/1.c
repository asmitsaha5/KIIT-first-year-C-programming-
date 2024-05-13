#include<stdio.h>
void main()
{
int w,x,y;
printf("Enter the value in meter\n");
scanf("%d",&w);
x=w/1000;
y=w%1000;
printf("Equivalent distance: %d kilometer %d meter\n",x,y);
}
