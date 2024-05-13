#include<stdio.h>
void main()
{
int x;
printf("Enter the number scored by the student out of 100:\n");
scanf("%d",&x);
if(x>=0 && x<=100)
{
if(x>=90)
printf("The grade scored by the student is O\n");
else if (x>=80)
printf("The grade scored by the student is E\n");
else if (x>=70)
printf("The grade scored by the student is A\n");
else if (x>=60)
printf("The grade scored by the student is B\n");
else if (x>=50)
printf("The grade scored by the student is C\n");
else if (x>=40)
printf("The grade scored by the student is D\n");
else {
printf("The grade scored by the student is F\n");
}}
else
printf("no grade available for this marks");
}
