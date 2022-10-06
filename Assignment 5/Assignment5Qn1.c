//Assignment5Qn1.c

//1. Write a program to print MySirG N times on the screen

#include<stdio.h>

int main()
{
    int i,n;

    printf("\nEnter the number of times to print \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
      printf("\nMySirG\n");

    return 0;
}