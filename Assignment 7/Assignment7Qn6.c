//6. Write a program to print all Prime numbers under 100

int main()
{
   int i,j,count;

   printf("\nPrime number between 1 to 100 are : ");

   for(i=2;i<=100;i++)   
    {
        count = 0;

        //Loop to check prime number
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            count++;
            break;
          }
        }

        if(count==0)
         printf(" %d ",i);
    }

   return 0;

}