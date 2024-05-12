#include<stdio.h>
#include<string.h>
void main()
{
char str[20],i,*ptr;
printf("Enter the string:");
scanf("%s",str);
int x=strlen(str);
for(i=x-1;i>=0;i--)
{
ptr=&str[i];
printf("%c",*ptr);
}
printf("\n");
}
