//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main()
{

   char ch;
   int x;

   printf("\nEnter an alphabet : ");
   scanf("%c", &ch);
   x = ch;

   if(x>=65&&x<=90)
     printf("\nUppercase\n");
    else if(x>=97&&x<=122)
     printf("\nLowercase\n");
     else
      printf("\nInvalid\n");
     
   return 0;

}