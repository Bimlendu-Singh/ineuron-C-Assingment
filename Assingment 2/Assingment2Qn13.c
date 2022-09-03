//13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>

int main()
{
    
    int num,digit1st,digit2nd;

    printf("\nEnter the number :  ");
    scanf("%d" , &num);

    printf("\nOriginal number : %d", num);

    digit1st = num%10;
    num = num/10;
    digit2nd = num%10;
    num = num/10;
    num = (num*100) + (digit1st*10) + (digit2nd);

    

    printf("\nNumber after rotating digit : %d", num);
   
          
    return 0;
}