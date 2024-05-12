#include<stdio.h>
void main()
{
int a,b,c,x;
printf("Enter the buying price\n");
scanf("%d",&a);
printf("Enter the market price\n");
scanf("%d",&b);
printf("Enter the discount value\n");
scanf("%d",&c);
x=b-c;
if (x>a)
{
    printf("you made a profit of %d rupees\n",x-a);
}
else 
{
    printf("You made a loss of %d rupees\n",a-x);
    
}
}
