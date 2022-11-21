//Pattern Question 5

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
      printf("\n");
      
      for(j=1;j<=4+i;j++)
      {
        if(j>=6-i)
          printf("*");
        else
          printf(" "); 
      }
    }

    return 0;
}