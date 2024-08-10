/*
10. 
     1 2 3 4 3 2 1
     1 2 3   3 2 1
     1 2       2 1
     1           1
*/



#include <stdio.h>
int main()
{
     int k= 1;
    for(int i = 1;i<=4;i++)
    {
       k = 1;
      for(int j = 1;j<=7;j++)
      {
          if( j<=5-i)
          {
              printf(" %d ",k++);   
          }     
          else if(j>=3+i)
          {
               printf(" %d ",--k);
          }
          else 
            printf("   ");

      }
      printf("\n");
    }
     return 0;
}