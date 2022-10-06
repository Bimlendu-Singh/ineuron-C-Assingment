//10. Write a program to print a table of N.

#include<stdio.h>

int main()
{
    int i,n;

    printf("\nEnter the number of times to print \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
      printf("\n%d*%d = %d\n",n,i,(n*i));

    return 0;
}