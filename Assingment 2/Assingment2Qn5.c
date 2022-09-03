//Assingment2Qn5.c
//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
    int a,sum=0;  

    printf("Enter a three digit number : ");
    scanf("%d",&a);

    sum = sum + (a%10);  //Say, a = 123 then sum = 0 + 3
    a/=10;               //a = 123/10 = 12
    sum = sum + (a%10);  //sum = 3 + 2.. so on
    a/=10;
    sum = sum + (a%10);

    printf("Sum of digit is : %d",sum);

    
    return 0;
}