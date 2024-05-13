#include <stdio.h>

int main() {
int n;
printf("Enter the number : \n");
scanf("%d",&n);
int i = 1;
while(i<=4)
{
for(int j = 0; j < 5; j++)
{	
if(j==0 || j==4 || i==1 || i==4)
printf("*");
else
printf(" ");
}
printf("\n");
i++;
}
}

