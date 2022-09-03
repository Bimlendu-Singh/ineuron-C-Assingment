//1)Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
    int x,unit;

    printf("Enter any number : ");
    scanf("%d",&x);

    //Storing unit digit of entered number in 'unit' variable by using modulus operator in number by 10
    unit = x%10;

    printf("Unit digit of entered number is %d ",unit);

    return 0;
}