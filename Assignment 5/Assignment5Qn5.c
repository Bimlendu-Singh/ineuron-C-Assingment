//5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i,n;

    printf("\nEnter the number of times to print \n");
    scanf("%d",&n);

    for(i=(2*n)-1;i>=1;i-=2)
      printf("\n%d\n",i);

    return 0;
}