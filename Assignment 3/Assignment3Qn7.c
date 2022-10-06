//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>

int main()
{

   int a,b,c,d;

   printf("\n\nOf quadratic equation ax^2+bx+c type : ");
   printf("\nEnter a  : ");
   scanf("%d", &a);

   printf("\nEnter b  : ");
   scanf("%d", &b);

   printf("\nEnter c  : ");
   scanf("%d", &c);

   d = (b*b)-4*(a*c);

   if(d>0)
     printf("\nRoots are real and distinct\n");
    else if(d==0)
     printf("\nRoots are real and equal\n");
     else
      printf("\nImaginary roots\n");
     

   return 0;

}