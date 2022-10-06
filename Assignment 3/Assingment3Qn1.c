//Assignment3Qn1
//1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter a number : ");
   scanf("%d", &x);

   if(x>0)
     printf("\nPositive\n");
    else
     printf("\n non-positive\n");
     

   return 0;

}