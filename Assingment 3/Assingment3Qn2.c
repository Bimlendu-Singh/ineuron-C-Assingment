//2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter a number : ");
   scanf("%d", &x);

   if(x%5==0)
     printf("\nNumber is divisible by 5\n");
    else
     printf("\nNumber is not divisible by 5\n");

     

   return 0;

}