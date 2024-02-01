/*WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.*/

#include<stdio.h>
#include<conio.h>


int main()
{
   float r , a , pi=3.14;

   printf("\nEnter radius of the circle : ");
   scanf("%f",&r);

   a = pi*(r*r);

   printf("\nArea of circle is %.2f having the radius %.2f", a,r);

   getch();


   return 0;

}