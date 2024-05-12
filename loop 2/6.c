#include <stdio.h>
void main() {
int n;
printf("Enter the number of terms in the series: ");
scanf("%d", &n);
int a = 0, b = 1, c, i = 1;
printf("Series: %d %d ", a, b);
do 
{
c = a + b;
printf("%d ", c);
a = b;
b = c;
i++;
}
while (i <= n - 2);
printf("\n");
}

