//2)Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int x,num;

    printf("Enter any number : ");
    scanf("%d",&x);
 
    num = x/10;

    printf("Entered number without its unit digit is %d ",num);

    return 0;
}