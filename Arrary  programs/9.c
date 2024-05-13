#include <stdio.h>
#include<limits.h>
void main() {
int n, i, j, largest, second_largest;
int arr[100];
printf("Enter the number of elements: ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("Enter the element %d: ",i);
scanf("%d", &arr[i]);
}
largest = arr[0];
second_largest = INT_MIN;
for (i = 1; i < n; i++) {
if (arr[i] > largest) {
second_largest = largest;
largest = arr[i];
} else if (arr[i] > second_largest) {
second_largest = arr[i];
}
}
printf("The second largest element is: %d\n", second_largest);
}

