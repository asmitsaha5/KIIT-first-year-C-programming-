#include <stdio.h>
void main() 
{
int n;
printf("Enter the number of terms in the Lucas sequence: ");
scanf("%d", &n);
int a = 1, b = 3, c, i = 3;
printf("Lucas sequence: %d %d ", a, b);
do {
c = a + b;
printf("%d ", c);
a = b;
b = c;
i++;
} 
while (i <= n);
}

