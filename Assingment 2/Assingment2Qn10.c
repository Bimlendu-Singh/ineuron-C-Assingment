//10. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main()
{
    int  x;

    printf("\nEnter a number :  ");
    scanf("%d" , &x);

    printf("\nOriginal Number : %d", x);

    x = x-x%10;

    printf("\nModified Number : %d", x);
   
          
    return 0;
}