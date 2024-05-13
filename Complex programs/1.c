#include<stdio.h>
void main()
{
int city,day,i,j;
printf("Enter number of city:");
scanf("%d",&city);
printf("Enter number of days:");
scanf("%d",&day);
int arr[city][day];
for(i=0;i<city;i++)
{
printf("Enter the temperatures for city %d\n",i+1);
for(j=0;j<day;j++)
{
printf("Day %d:", (j+1));
scanf("%d", &arr[i][j]);
}
}
for(i=0;i<city;i++)
{
for(j=0;j<day;j++)
printf("City %d, Day %d: %d\n",(i+1),(j+1),arr[i][j]);
}
}
