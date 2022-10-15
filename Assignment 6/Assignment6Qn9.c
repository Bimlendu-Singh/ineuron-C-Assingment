//9. Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int a,b,i,j,d,lcm=1,x,y,count;

    printf("\nEnter two number to find their LCM : ");
    scanf("%d",&a);
    scanf("%d",&b);

    //Assigning the 'a' and 'b' in 'x' and 'y' so we don't loose original value of 'a' and 'b in the further LCM process
    x=a;
    y=b;

    if(a>b)
     d=b;
    else
     d=a;

    for(i=2;i<=d;i++)
    {
        count = 0;

        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            count++;
            break;
          }
        }
        if(count==0)
        {
            while((a%i==0)&&(b%i==0))
            {
                lcm = lcm*i;
                a = a/i;
                b = b/i;
                d=a;               
            }
        }
    }
    lcm = (lcm*a)*b;

    printf("\nLCM of %d and %d is : %d ", x,y,lcm);

    return 0;
}