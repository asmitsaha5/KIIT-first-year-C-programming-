#include <stdio.h>

int main() {
int rows, i, j;
printf("Enter the number of rows: ");
scanf("%d", &rows);
for (i = 1; i <= rows; i++) {
for (j = 1; j < i; j++) {
printf(" ");
}
for (j = 1; j <= 2 * (rows - i) + 1; j++) {
printf("*");
}
printf("\n");
}
}
