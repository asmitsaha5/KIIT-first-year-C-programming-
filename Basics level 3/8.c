#include <stdio.h>
void main()
{
    int h,h1,h2,m,m1,m2,s,s1,s2;
    printf("Enter the time in  HH:MM:SS format");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Enter the second time in same format");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    s=s1+s2;
    m=m1+m2;
    h=h1+h2;
    printf("The added time is %d:%d:%d",h,m,s);

}
