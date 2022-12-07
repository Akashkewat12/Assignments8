#include<stdio.h>
int main()
{
  int i,j;
  for(i=0;i<4;i++)
  {
      for(j=0;j<7;j++)
      {
          if(j>=3-i && j<=3+i)
            printf("*");
            else
            printf(" ");
      }
      printf("\n");
  }
  //printf("----------------------------\n");
  for(i=0;i<5;i++)
  {
      for(j=0;j<10;j++)
      {
          if(j>=0+i && j<=8-i)
            printf("*");
            else
            printf(" ");
      }
      printf("\n");
  }
return 0;
}

