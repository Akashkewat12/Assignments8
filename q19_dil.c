#include<stdio.h>
int main()
{
    int i,j,n;
    for(i=0;i<3;i++)
    {
       for(j=1;j<=19;j++)
        {
          if((j>=4-i && j<=7+i) || (j>=13-i && j<=16+i))
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<11;i++)
    {
       for(j=0;j<=17;j++)
        {
          if(j>=1+i&&j<=17-i)
             printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}



