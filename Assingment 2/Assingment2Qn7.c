//7. Write a program to find the position of first 1 in LSB(Least Significant Bit).

#include<stdio.h>

int main()
{
    int pos = 1, num;

    printf("Enter a number : ");
    scanf("%d",&num);

    while((num&1)==0)  //1&1 is 1 in binary, so using condition accordingly 
    {
        pos++;
        num = num>>1;  //Left Shifting binary value of num and storing in it again.
    }

    printf("Position of first 1 or first set in LSB is : %d" , pos);
    
    return 0;
}