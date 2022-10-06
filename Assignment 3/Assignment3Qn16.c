//16. Write a program to check whether a given character is an alphabet (uppercase),
// an alphabet (lower case), a digit or a special character.

#include<stdio.h>

int main()
{

   char ch;
   int x;

   printf("\nEnter a character : ");
   scanf("%c", &ch);
   x = ch;

  if(x>=48&&x<=57)
     printf("\nDigit\n\n");
   else if(x>=65&&x<=90)
     printf("\nAlphabet (Uppercase)\n\n");
    else if(x>=97&&x<=122)
     printf("\nAlphabet (Lowercase)\n\n");
     else
      printf("\nSpecial Character\n\n");
     
   return 0;

}