//3. Write a program to print the first N natural numbers in reverse order

#include<stdio.h>

int main()
{
    int i,n;

    printf("\nEnter the number of times to print \n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
      printf("\n%d\n",i);

    return 0;
}