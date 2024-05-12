#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int a;
printf("Enter the first string:");
fgets(str1, sizeof(str1), stdin);
printf("Enter the second string:");
fgets(str2, sizeof(str2), stdin);
printf("1,length\n2,copy\n3,concatenate\n4,compare\n");
scanf("%d",&a);
switch(a)
{
case 1:
int length = strlen(str1);
printf("The length of the string = %d\n",length-1);
break;
case 2:
char str3[100];
strcpy(str3,str1);
printf("Copied string: %s",str3);
break;
case 3:
printf("The new string is : %s\n",strcat(str1,str2));
break;
case 4:
int x= strcmp(str1,str2);
if (x==0)
printf("Two strings are equal\n");
else
printf("Two strings are not equal\n");
break;
}
}
