//7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main()
{
   int i,j,count,x,y,a,b;

   printf("\nEnter two numbers in between you want to find prime number : ");
   scanf("%d%d",&x,&y);

    //This condition to store smallest number in 'a' and greatest number in 'b'.
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

   printf("\nPrime number between %d and %d are : ",x,y);

   for(i=a;i<=b;i++)   
    {
        count = 0;

        //Loop to check prime number
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            count++;
            break;
          }
        }

        if(count==0)
         printf(" %d ",i);
    }

   return 0;

}