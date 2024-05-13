#include<stdio.h>
struct students
{
float mark[5];
int roll;
char name[20],gender[2];
}s[100];
void main()
{
int n,i,j,x,fail=0;
printf("Enter no. of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the details of student %d:\n",i+1);
printf("Enter name:");
scanf("%s",s[i].name);
printf("Enter gender:");
scanf("%s",s[i].gender);
printf("Enter the roll no.:");
scanf("%d",&s[i].roll);
for(j=0;j<5;j++)
{
printf("Enter the marks for subject %d:",j+1);
scanf("%f",&s[i].mark[j]);
}
}
printf("Enter the subject number whose fail list to be displayed:");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(s[i].mark[x-1]<40)
fail++;
}
printf("Number of failed students= %d\n",fail);
}
