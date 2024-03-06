/*
8.
    1
   121
  12321
 1234321  
*/


#include <stdio.h>
int main()
{
     int a = 1;
     for(int i = 1;i<=4;i++)
     {
          a = 1;
          for(int j = 1;j<=7;j++)
          {
              if(j>=5-i && j<=3+i)
              {
                printf("%d",a);
                (j<4)?a++:a--;
              }
              else 
                printf(" ");
          }
          printf("\n");
     }
     return 0;
}