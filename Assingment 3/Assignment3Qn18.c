//18. Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter the month number : ");
   scanf("%d", &x);

   if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
     printf("\n31 days in this month\n");
    else if(x==2)
      printf("\n28 days in a common year and 29 days in leap years\n");
     else if(x==4||x==6||x==9||x==11)
       printf("\n30 days in this month\n");  
      else
       printf("\nInvalid month number\n");  
          

   return 0;

}