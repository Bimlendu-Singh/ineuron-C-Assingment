//4. Write a program to check whether a given number is an even number
//or an odd number without using % operator.

#include<stdio.h>

int main()
{
    int  num;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    if((num&1)==0)                         //Using bitwise operator to check number is odd or even
     printf("\nNumber is even\n");
    else
     printf("\nNumber is odd\n");
          
    return 0;
}