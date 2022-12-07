
#include<stdio.h>//not running code

int main()
{
    int i,j,c=1;
    for(i=0;i<5;i++)
    {
      for(j=0;j>=1+i;j++)
      {
          if(j<=7-i)
          {
               printf("*");


          }

          else
          {
              printf(" ");
          }


      }
        printf("\n");
    }
    return 0;
}
