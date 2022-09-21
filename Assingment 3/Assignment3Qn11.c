/*11. Write a program to take marks of 5 subjects from the user. 
Assume marks are given out of 100 and passing marks is 33.
Now display whether the candidate passed the examination or failed.*/

#include<stdio.h>
int eng,hindi,maths,science,sst,tMarks;
float per;

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

   if(eng<33)
     printf("\nFailed in English\n");
   if(hindi<33)
     printf("\nFailed in Hindi\n");
   if(maths<33)
     printf("\nFailed in Maths\n");
   if(science<33)
     printf("\nFailed in Science\n");
   if(sst<33)
     printf("\nFailed in SS.T\n"); 

   tMarks = eng + hindi + maths + science + sst ;
   per = (tMarks/5.0);

   if(per>33.00)
   {
    printf("\nOverall percentage is : %f", per);
    printf("\nPassed\n");
   }
   else
   {
    printf("\nOverall percentage is : %f", per);
    printf("\nFailed\n");
   }
    
   return 0;

}