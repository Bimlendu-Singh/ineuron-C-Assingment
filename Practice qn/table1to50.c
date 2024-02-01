#include<stdio.h>

int main(){

    int x,i,j;

    printf("\nTable from 1 to 50 is : ");


    for(i=1;i<=50;i++)
    {
        printf("\nTable of %d is \n ",i);
        for(j=1;j<=10;j++)
        {
            printf("%d*%d = %d\n",x,i,(x*i));
        }
    }
        

    return 0;
}