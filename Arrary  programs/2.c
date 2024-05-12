#include <stdio.h>
void main() 
{
int N;
printf("Enter the number of integers (N): ");
scanf("%d", &N);
int arr[N];
printf("Enter %d integers:\n", N);
for (int i = 0; i < N; i++) {
scanf("%d", &arr[i]);
}
int sum = 0;
for (int i = 0; i < N; i++) {
sum += arr[i];
}
printf("Sum of the %d integers is: %d\n", N, sum);
}

