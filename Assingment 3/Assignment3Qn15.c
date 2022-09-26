//15. Write a program to check whether a given number is positive, negative or zer

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter a number : ");
   scanf("%d", &x);

   if(x>0)
     printf("\nPositive\n");
    else if(x==0)
     printf("\nZero\n");
     else
      printf("\nNegative\n");
      

   return 0;

}