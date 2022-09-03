//11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. 
//(Example - number=234 and digit=9 then the resulting number is 2349)

#include<stdio.h>

int main()
{
    int  x, digit;

    printf("\nEnter a number :  ");
    scanf("%d" , &x);

    printf("\nEnter a digit :  ");
    scanf("%d" , &digit);

    printf("\nOriginal Number : %d", x);

    x = (x*10)+digit;

    printf("\nNumber after appending digit : %d", x);
   
          
    return 0;
}