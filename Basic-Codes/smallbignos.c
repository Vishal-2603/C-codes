/*Find the largest number among the three numbers.*/
#include<stdio.h>
void main()
{
    int a=2, b=1, c=2;
    // checking a 
    if(a>b && a>c)
    {
        printf("a is big : %d",a);
    }
    // checking b
    else if(b>a && b>c)
    {
        printf("b is big : %d",b);
    }
    // checking c
    else if(c>a && c>b)
    {
        printf("c is big : %d",c);
    }
    // both no are equal
    else if(a==b && b==c && a==c){
        printf("All are equal");
    }
    // a & b are equal
    else if(a==b)
    {
        printf("A-[%d] and B-[%d] are equal",a,b);
    }
    // b & c equal
    else if(b==c)
    {
        printf("B-[%d] and C-[%d] are equal",b,c);
    }
    // a & c are equal
    else if(a==c)
    {
        printf("A-[%d] and C-[%d] are equal",a,c);
    }
    else{
        printf("Invalid value");
    }
    
}