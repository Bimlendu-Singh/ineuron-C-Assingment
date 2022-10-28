//5. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>

int main()
{
    int x,y,a,b,temp;

    printf("\nEnter two number to check they are co-prime or not : ");
    scanf("%d",&x);
    scanf("%d",&y);

    if(x>y)
    {
        a=y;
        b=x;
    }
    else
    {
        a=x;
        b=y;
    }

    while(b%a!=0)
    {
        temp = a;
        a = b%a;
        b = temp;
    }

    if(a==1)
     printf("\n%d and %d is co-prime number.\n",x,y);
    else
     printf("\n%d and %d is NOT co-prime number.\n",x,y);
      

    return 0;
}