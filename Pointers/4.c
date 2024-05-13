#include<stdio.h>
#include<string.h>
void main()
{
char str[20],*ptr;
int vcount=0,ccount=0,i,x;
printf("Enter the string:");
scanf("%s",str);
ptr=str;
x=strlen(str);
for(i=0;i<x;i++)
{
if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
vcount++;
else
ccount++;
ptr++;
}
printf("No. of vowels = %d\nNo. of consonants = %d\n",vcount,ccount);
}
