#include<stdio.h>
int main()
{

    int i,j,n=5;

    for(i=0;i<5;i++)
    {
       for(j=0;j<=9;j++)
        {
          if(j>=1+i&&j<=9-i)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


