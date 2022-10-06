//2. Write a program to print the first N natural numbers.

#include<stdio.h>

int main()
{
    int i,n;

    printf("\nEnter the number of times to print \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
      printf("\n%d\n",i);

    return 0;
}