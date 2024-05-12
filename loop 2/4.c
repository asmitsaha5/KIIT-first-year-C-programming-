#include <stdio.h>
void main() 
{
int num, factorial = 1;
printf("Enter a positive integer: ");
scanf("%d", &num);
int i = 1;
do 
{
factorial *= i;
i++;
} 
while (i <= num);
printf("Factorial of %d is %d\n", num, factorial);
}
