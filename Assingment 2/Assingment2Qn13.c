//13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>

#include<stdio.h>
int main()
{
    int a,x,y,newno;

    printf("Enter the three digit number : ");
    scanf("%d",&a);

    x=(a%10)*100;
    y=a/10;
   newno=x+y;
   printf("The new number is %d ",newno);

return 0;
}