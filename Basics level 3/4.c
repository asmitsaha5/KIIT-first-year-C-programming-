#include<stdio.h>
void main()
{
int w,x,y,z;
printf("Enter the time value in second\n");
scanf("%d",&w);
x=w/3600;
w%=3600;
y=w/60;
z=w%60;
printf("Equivalent time: %dhours %dminutes %dseconds\n",x,y,z);
}
