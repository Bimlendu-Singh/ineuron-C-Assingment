//3. Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter a number : ");
   scanf("%d", &x);

   if(x%2==0)
     printf("\nNumber is Even\n");
    else
     printf("\nNumber is Odd\n");

     

   return 0;

}