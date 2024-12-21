/* prog to calculate percentage of 5 students*/
#include<stdio.h>
void main()
{
    int marks1,marks2,marks3,marks4,marks5;
    float per;
    printf("enter the marks\n");
    scanf("%d %d %d %d %d",&marks1,&marks2,&marks3,&marks4,&marks5);
    per=(marks1+marks2+marks3+marks4+marks5)/5;
    printf("your percentage is %.2f",per);
    // scanf("%f",&per);
    if(per>35)
    {
        printf("you are passed in exam");
    }
     else if(per>60)
    {
    printf("you are first class");
    }
     else if(per>75)
    {
    printf("you are distinction");
    }
    else if(per>90)
    {
    printf("you are topper of the class");
    }
     else
     {
     printf("you are Fail");
     }
}