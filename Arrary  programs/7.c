#include <stdio.h>
void main() {
int n, i, j, duplicate = 0;
int arr[100];
printf("Enter the number of elements: ");
scanf("%d", &n);

for (i = 0; i < n; i++) {
printf("Enter the elements %d: ",i);
scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (arr[i] == arr[j]) {
duplicate++;
break;
}
}
}
printf("The total number of duplicate elements is: %d\n", duplicate);
}
