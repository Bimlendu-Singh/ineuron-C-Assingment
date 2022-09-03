//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>

int main()
{
    
    float rupee, x=76.23f, dollar;

    printf("\nEnter amount in INR :  ");
    scanf("%f" , &rupee);

    printf("\nINR : %f", rupee);

    dollar = rupee/x;

    printf("\nDollar : %f", dollar);
   
          
    return 0;
}