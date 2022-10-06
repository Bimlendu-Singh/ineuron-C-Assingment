//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>

int main()
{

   int a,b,c;

   printf("\nEnter the sides of a triangle : ");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);


   if((a+b)<=c||(b+c)<=a||(c+a)<=b)
     printf("\nInvalid Triangle\n");
    else
     printf("\n Valid Triangle\n");
     

   return 0;

}