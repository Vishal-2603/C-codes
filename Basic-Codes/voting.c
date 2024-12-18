//Program to check whether a person is eligible for voting or not
#include <stdio.h>

int main() 
{
  int  age;
  printf("enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible for voting");
    }
    else if(age <= 0){
        printf("Age cannot be Negative");
    }
    else
    {
        printf("You are not eligible for voting");
    }

    return 0;
}

/*
enter your age: 20
you are eligible for voting
*/

/*
enter your age: -10
Age cannot be Negative
*/

/*
enter your age: 12
You are not eligible for voting
*/