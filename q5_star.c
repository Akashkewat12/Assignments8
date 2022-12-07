#include<stdio.h>
int main()
{

    int i,j,n=4;

    for(i=0;i<=4;i++)
    {
       for(j=0;j<=4+i;j++)
        {
           if(4-i<=j)
            printf("*");
           else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


