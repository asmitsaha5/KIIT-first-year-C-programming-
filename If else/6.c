#include<stdio.h>
void main()
{
char alp;
printf("Enter the alphabet:");
scanf("%c",&alp);
if (alp>='a' && alp<='z')
{
if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u')
{printf("The entered alphabet is vowel\n");
}
else
{printf("The entered alphabet is consonant\n");
}
}
else
{
printf("Entered character is not an alphabet\n");
}
}
