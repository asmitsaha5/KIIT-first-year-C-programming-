#include<stdio.h>
void main()
{
char alp;
printf("Enter the alphabet\n");
scanf("%c",&alp);
if(alp>='A'&& alp<='Z')
{
printf("%c\n", alp+32);
}
else if(alp>='a' && alp<='z')
{
printf("%c\n",alp-32);
}
else
{printf("%c is not an alphabet\n",alp);
}
}
