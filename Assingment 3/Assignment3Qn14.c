//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter a number : ");
   scanf("%d", &x);

   if(x%21==0)
     printf("\nDivisible by both 7 and 3\n");
    else if(x%7==0)
     printf("\nDivisible by 7 only\n");
      else if(x%3==0)
       printf("\nDivisible by 3 only\n");
        else
         printf("\nNeither divisible by 7 nor by 3\n");
              
   return 0;

}