//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter a number : ");
   scanf("%d", &x);

   if(x%6==0)
     printf("\nDivisible by both 3 and 2\n");
    else if(x%2==0)
     printf("\nDivisible by 2 only\n");
      else if(x%3==0)
       printf("\nDivisible by 3 only\n");
        else
         printf("\nNeither divisible by 3 nor by 2\n");
         
       
     
   return 0;

}