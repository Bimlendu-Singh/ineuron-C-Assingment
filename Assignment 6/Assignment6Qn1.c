//Assignment6Qn1.c
//1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>

int main()
{
    int x,sum=0,i;

    printf("\nEnter the required value of N to find sum : ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        sum = sum + i;
    }

    printf("\nSum is : %d",sum);

 
    return 0;
}