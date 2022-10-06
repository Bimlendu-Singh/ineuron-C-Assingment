//9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main()
{
    int  a;
    float b;
    char c;
    double d;

    printf("\nSize of int variable a is : %d\n", sizeof(a));
    printf("Size of float variable b is : %d\n", sizeof(b));
    printf("Size of char variable c is : %d\n", sizeof(c));
    printf("Size of double variable d is : %d\n", sizeof(d));

          
    return 0;
}