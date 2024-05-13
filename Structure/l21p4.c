#include<stdio.h>
struct time
{
int h,m,s;
}t[2];
void main()
{
int i,hr,mn,se=0;
for(i=0;i<2;i++)
{
printf("Enter time %d:\n",i+1);
printf("Hours:");
scanf("%d",&t[i].h);
printf("Minutes:");
scanf("%d",&t[i].m);
printf("Second:");
scanf("%d",&t[i].s);
}
for(i=0;i<2;i++)
se+=(3600*t[i].h)+(60*t[i].m)+t[i].s;
hr=se/3600;
se%=3600;
mn=se/60;
se%=60;
printf("Total time = %d:%d:%d\n",hr,mn,se);
}
