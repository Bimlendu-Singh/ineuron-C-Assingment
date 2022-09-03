//4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter any number in a : ");
    scanf("%d",&a);

    printf("Enter any number in b : ");
    scanf("%d",&b);

    printf("\nBefore Swapping\n  ");
    printf(" a = %d , b = %d",a,b);

    //Swapping, say a=20,b=30
    a=a+b; //a=20+30=50
    b=a-b; //b=50-30=20
    a=a-b; //a=50-20=30

    printf("\nAfter Swapping\n  ");
    printf(" a = %d , b = %d",a,b);

    return 0;
}