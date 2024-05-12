#include<stdio.h>
struct student
{
int roll;
char name[20],gender[2];
float mark;
}s;
void main()
{
printf("Enter Roll:");
scanf("%d",&s.roll);
printf("Enter name:");
scanf("%s",s.name);
printf("Enter gender:");
scanf("%s",s.gender);
printf("Enter marks:");
scanf("%f",&s.mark);
printf("Roll:%d\nName:%s\nGender:%s\nMarks:%0.2f\n",s.roll,s.name,s.gender,s.mark);
}
