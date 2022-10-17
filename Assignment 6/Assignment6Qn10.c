//10. Write a program to reverse a given number

#include<stdio.h>

int main()
{
    int n,i,x,y,count = 0,num=0;

    printf("\nEnter number : ");
    scanf("%d",&n);
    y=n;
   
    for(i=n;i!=0;i/=10)
     count++;

    for(i=1;i<=count;i++)
    {
        x = n%10;
        num =  num*10 + x;
        n/=10;
    }

    printf("\nReverse of %d is %d\n", y,num);


 
    return 0;
}