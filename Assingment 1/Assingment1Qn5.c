//WAP to calculate the length of String using printf function.

#include<stdio.h>

int main()
{
 char str[20];

 printf("\nEnter string : ");
 scanf("%s",&str);

 //int x = printf(str); we can write like this to store string length using printf

 printf("\nLength of string ");
 printf(" is %d ",printf(str));  //Here we are getting string name as well as string length with the help of printf and %d
 return 0;
}