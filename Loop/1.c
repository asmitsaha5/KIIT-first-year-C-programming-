#include<stdio.h>
void main()
{
float x,y;
int choice;
float result;
printf("Enter the first number:");
scanf("%f",&x);
printf("Enter the second number:");
scanf("%f",&y);
printf("Menu:\n");
printf("1.Add\n");
printf("2.Subtract\n");
printf("3.Multiply\n");
printf("4.Divide\n");
printf("Enter your choice(1/2/3/4):");
scanf("%d",&choice);
switch(choice){
case 1:
result=x+y;
printf("Result:%f+%f=%f\n",x,y,result);
break;
case 2:
result=x-y;
printf("Result:%f-%f=%f\n",x,y,result);
break;
case 3:
result=x*y;
printf("Result:%f*%f=%f\n",x,y,result);
break;
case 4:
if (y!=0){
result=(float)x/y;
printf("Result: %f/%f=%f\n",x,y,result);
}
else{
printf("Cannot divide by zero.\n");
}
break;
}
}
