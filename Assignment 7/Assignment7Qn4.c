//4. Write a program to calculate HCF of two numbers

#include<stdio.h>

int main()
{
    int x,y,a,b,temp;

    printf("\nEnter two number to find their HCF : ");
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

    printf("HCF of number %d and %d is : %d",x,y,a);


    return 0;
}