#include <stdio.h>
void main() {
int array[5];
int n, search, i, found = 0;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &array[i]);
}
printf("Enter the element to search: ");
scanf("%d", &search);
for (i = 0; i < n; i++) {
if (array[i] == search) {
found = 1;
break;
}
}
if (found) {
printf("%d found at index %d.\n", search, i);
} else {
printf("%d not found in the array.\n", search);
}
}
