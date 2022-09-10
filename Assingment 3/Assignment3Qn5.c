//5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>

int main()
{
    int  num;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    if((num<1000) && (num>99))
      printf("%d is a three digit number", num);
    else
      printf("%d is NOT a three digit number", num);
          
    return 0;
}