/*10. Write a program which takes the cost price and selling price of a product from the user. 
Now calculate and print profit or loss percentage.*/

#include<stdio.h>

int main()
{

   float cp,sp,profit,loss;

   printf("\nEnter cost price : ");
   scanf("%f", &cp);
   
   printf("\nEnter selling price : ");
   scanf("%f", &sp); 

   if(sp>=cp)
   {
    profit = sp - cp; 
    printf("\nProfit percentage is : %f\n",((profit/cp)*100));
   } 
    else
    {
     loss = cp - sp;
     printf("\nLoss percentage is : %f\n",(loss/cp)*100);
    }

   return 0;

}