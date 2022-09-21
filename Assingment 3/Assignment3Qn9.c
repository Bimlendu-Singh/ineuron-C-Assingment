//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>

int main()
{

   int a,b,c;

   printf("\nEnter first number : ");
   scanf("%d", &a);

   printf("\nEnter second number : ");
   scanf("%d", &b);

   printf("\nEnter third number : ");
   scanf("%d", &c);

   /*if(a>b&&((b>c||b==c)||a==c))
     printf("\nGreatest number is : %d\n", a);
    else if(b>c&&((c>a||c==a)||b==a))
        printf("\nGreatest number is : %d\n", b);
     else if(c>a&&((a>b||a==b)||c==b))
         printf("\nGreatest number is : %d\n", c);
      else 
         printf("\nGreatest number is : %d\n", a);  */

    if(a>=b&&a>=c)
      printf("\nGreatest number is : %d\n", a);
     else if(b>=c&&b>=a)
       printf("\nGreatest number is : %d\n", b);

     

   return 0;

}