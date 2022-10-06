//8. Write a program to check whether the given number is even or odd using a bitwise operator.

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