//3)Write a program to swap values of two int variables

#include<stdio.h>

int main()
{
    int a,b,temp;

    printf("Enter any number in a : ");
    scanf("%d",&a);

    printf("Enter any number in b : ");
    scanf("%d",&b);

    printf("\nBefore Swapping\n  ");
    printf("Value in a : %d , Value in b : %d",a,b);

    //Swapping
    temp=a;
    a=b;
    b=temp;

    printf("\nAfter Swapping\n  ");
    printf("Value in a : %d , Value in b : %d",a,b);

    return 0;
}