//9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>

int main()
{
   int x,rem,sum=0,num,count=0,res,i,j;

   printf("\nEnter a number to check armstrong or not : ");
   scanf("%d",&x);

   num = x;

   while(x!=0)
   {
     count++;
     x = x/10;
   }
   
   x = num;

   for(i=1;i<=count;i++)
   {
     res = 1;
     rem = x%10;
     for(j=1;j<=count;j++)
      res = res*rem;

     sum = sum + res;
     x = x/10;
   }

   if(sum==num)
    printf("%d is an armstrong number",num);
   else
    printf("%d is NOT an armstrong number",num);
     

   return 0;

}