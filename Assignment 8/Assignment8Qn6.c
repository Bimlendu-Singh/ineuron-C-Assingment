//Pattern Question 6

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
      printf("\n");
      
      for(j=9;j>=i;j--)
      {
        if(j<=10-i)
          printf("*");
        else
          printf(" "); 
      }
    }

    return 0;
}
