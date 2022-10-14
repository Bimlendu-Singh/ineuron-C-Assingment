//7. Write a program to count digits in a given number

#include<stdio.h>

int main()
{
    int x,i,count = 0;

    printf("\nEnter the number to find its no of digits : ");
    scanf("%d",&x);

    if(x==0)
          printf("\nNumber of digit is : 1");
    else
    {        
      for(i=x;i!=0;i/=10)
      {
        count++;
      }
      printf("\nNumber of digit is : %d",count);
    }


 
    return 0;
}