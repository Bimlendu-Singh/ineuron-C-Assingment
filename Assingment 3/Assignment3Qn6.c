//6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>

int main()
{
    int  a,b;

    printf("\nEnter two number : ");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>b)
     printf("%d is Greater\n", a);
    else if(a==b)
     printf("%d , Both are Same\n", a);
    else
     printf("%d is Greater\n", b);
               
    return 0;
}