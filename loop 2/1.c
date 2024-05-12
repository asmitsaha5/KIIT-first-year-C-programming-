#include <stdio.h>
void main() 
{
int x, y = 0,z = 1;
printf("Enter a number: ");
scanf("%d", &x);
do {
if (x %z== 0) {
y+=z ;
}
z++;
}
while (z <= x / 2);
if (y ==x)
{
printf("%d is a perfect number.\n", x);
}
else
{
printf("%d is not a perfect number.\n", x);
}
}


