/*11. Write a program to take marks of 5 subjects from the user. 
Assume marks are given out of 100 and passing marks is 33.
Now display whether the candidate passed the examination or failed.*/

#include<stdio.h>
int eng,hindi,maths,science,sst;

int main()
{

   int x;

   printf("\nEnter obtained marks in all the 5 subject \n\n");
   printf("English Marks : " );
   scanf("%d", &eng);
   printf("Hindi Marks : " );
   scanf("%d", &hindi);
   printf("Maths Marks : " );
   scanf("%d", &maths);
   printf("Science Marks : " );
   scanf("%d", &science);
   printf("SS.T Marks : " );
   scanf("%d", &sst);

   if(eng>=33&&hindi>=33&&maths>=33&science>=33&sst>=33)
     printf("\nPassed\n");
   else
     printf("\nFailed\n");
     
    
   return 0;

}