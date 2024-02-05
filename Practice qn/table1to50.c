#include<stdio.h>

int main(){

    int i,j;

    printf("\nTable from 1 to 50 is : ");
    printf("\n");


    for(i=2;i<=50;i++)
    {
        printf("\nTable of %d is\n\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d*%d = %d\n",i,j,(i*j));
        }
    }
        

    return 0;
}