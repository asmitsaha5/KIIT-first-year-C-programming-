#include <stdio.h>
int sum;
int Sum(int a, int b) 
{
    if (b == 0)
        return a;
    sum = Sum(a, b - 1) + 1;
    return sum;
}


int main() 
{
    int p, q;
    printf("Enter two integer values::\n");
    scanf("%d %d", &p, &q);
    printf("Result:: %d + %d = %d\n", p, q, Sum(p, q));
    return 0;
}
