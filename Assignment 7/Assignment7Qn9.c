//9. Write a program to check whether a given number is an Armstrong number or not

// In numerical number theory, the Armstrong number definition is the number in any given number base,
//  which forms the total of the same number, when each of its digits is raised to the power of the number of digits in the number.

#include<stdio.h>

int main()
{
   int x,rem,sum=0,num,count=0,res,i,j;    //

   //Input
   printf("\nEnter a number to check armstrong or not : ");
   scanf("%d",&x);

   num = x;

   //Loop to count number of digits
   while(x!=0)
   {
     count++;
     x = x/10;
   }
   //Restoring the original value of x
   x = num;

   //Loop to check armstrong number
   for(i=1;i<=count;i++)
   {
     res = 1;
     rem = x%10;
     //Loop multiplying the remainder count times(Where,'count' is the count of number of digits in the given number)
     for(j=1;j<=count;j++)
      res = res*rem;

     sum = sum + res;
     x = x/10;
   }
   //Display
   if(sum==num)
    printf("%d is an armstrong number",num);
   else
    printf("%d is NOT an armstrong number",num);
     

   return 0;

}