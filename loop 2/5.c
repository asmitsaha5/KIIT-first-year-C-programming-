#include <stdio.h>
void main() {
int n, first = 0, second = 1, next;
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci Series up to %d terms: \n", n);
int i = 1;
do {
if (i == 1)
printf("%d, ", first);
else if (i == 2)
printf("%d, ", second);
else {
next = first + second;
printf("%d, ", next);
first = second;
second = next;
}
i++;
} while (i <= n);
printf("\n");
}

