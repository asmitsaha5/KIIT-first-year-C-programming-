#include<stdio.h>
void main()
{
int x;
printf("Enter a weekday number (0-6):");
scanf("%d",&x);
switch (x){
case 0:
printf("Sunday\n");
break;
case 1:
printf("Monday\n");
break;
case 2:
printf("Tuesday\n");
break;
case  3:
printf("Wednesday\n");
break;
case 4:
printf("Thrusday\n");
break;
case 5:
printf("Friday\n");
break;
default:
printf("Invalid weekday number\n");
}
}
