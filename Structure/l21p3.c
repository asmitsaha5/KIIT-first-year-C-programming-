#include<stdio.h>
struct dist
{
int km,m;
}d[2];
void main()
{
int dm=0,dkm,i;
for(i=0;i<2;i++)
{
printf("Enter the distance for distance %d:\n",i+1);
printf("Enter km:");
scanf("%d",&d[i].km);
printf("Enter meter:");
scanf("%d",&d[i].m);
dm+=(d[i].km*1000)+d[i].m;
}
dkm=dm/1000;
dm=dm%1000;
printf("The total distance = %d km %d m\n",dkm,dm);
}
