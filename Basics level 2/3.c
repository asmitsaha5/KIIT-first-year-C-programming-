#include<stdio.h>
void main()
{
float a,b,c,d,e;
printf("Marks of subject a=");
scanf("%f",&a);
printf("Marks  of subject b=");
scanf("%f",&b);
printf("Marks of subject c=");
scanf("%f",&c);
printf("Marks of subject d=");
scanf("%f",&d);
printf("Marks of subject e=");
scanf("%f",&e);
printf("The average marks is=%f",(a+b+c+d+e)/5);
printf("The percentage is=%f",((a+b+c+d+e)/1000)*100);
}

