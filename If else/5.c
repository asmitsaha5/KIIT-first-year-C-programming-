#include <stdio.h>
#include <math.h>
void main()
{
double a,b,c,dis,root1,root2;
printf("Enter a,b,c:\n");
scanf("%lf%lf%lf",&a,&b,&c);
printf("The equation:%lfx^2+%lfx+%lf\n",a,b,c);
dis=b*b-4*a*c;
if(dis>0)
{
root1=(-b+sqrt(dis))/(2*a);
root2=(-b-sqrt(dis))/(2*a);
printf("Root1=%lf\nRoot2=%lf\n",root1,root2);
}
else if(dis=0)
{
root1=-b/(2*a);
printf("root1=root2=%lf\n",root1);
}
else
{
printf("The equation has no real roots\n");
}
}
