#include <stdio.h>
void main() {
int n, i, product = 1;
int arr[100];
printf("Enter the number of elements: ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("Enter the element %d: ",i);
scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++) {
product *= arr[i];
}
printf("The product of the elements is: %d\n", product);
}

