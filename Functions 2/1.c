#include<stdio.h>
int gcd(int a,int b)
{
if(a==b)
return a;
else if(a>b)
gcd(a-b,b);
else
gcd(a,b-a);
}
int main()
{
int a,b,g;
printf("\nEntertwonumbers:");
scanf("%d%d",&a,&b);
printf("GCDof%d&%d=%d\n",a,b,gcd(a,b));
return 0;
}
