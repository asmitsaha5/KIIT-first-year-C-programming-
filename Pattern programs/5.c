#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int a = 65;
    for(int i = 1; i<= n; i++)
    {
    	
    	int  k = i;
	for(int j = 1; j<=i; j++)
    	{
    		char c = a + k - 1;
		printf("%c", c);
		k--;
	}
	printf("\n");
    }
    return 0;
}

