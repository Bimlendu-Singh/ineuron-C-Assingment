//8. Write a program to check whether a given year is a leap year or not.

/*The year must be evenly divisible by 4;
->If the year can also be evenly divided by 100, it is not a leap year;
unless...
->The year is also evenly divisible by 400. Then it is a leap year.
  According to these rules, the years 2000 and 2400 are leap years,
while 1800, 1900, 2100, 2200, 2300, and 2500 are not leap years.*/

#include<stdio.h>

int main()
{

   int x;

   printf("\nEnter Year : ");
   scanf("%d", &x);

   if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
             printf("\n%d is  Leap Year!!\n", x);
            else
             printf("\n%d is Not a Leap Year!!\n", x);            
        }
        else
          printf("\n%d is a Leap Year!!\n", x);            
          
    }
    else
      printf("\n%d is Not a Leap Year!!\n", x);            
       
           

   return 0;

}