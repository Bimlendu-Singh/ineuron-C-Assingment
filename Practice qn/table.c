#include<stdio.h>

int main(){

    int x,i;

    printf("\nEnter Number for it's Table: ");
    scanf("%d",&x);

    for(i=1;i<=100;i++)
    {
        printf("%d*%d = %d\n",x,i,(x*i));
    }



    return 0;
}