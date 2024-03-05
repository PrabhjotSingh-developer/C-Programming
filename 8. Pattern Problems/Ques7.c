/* 1234567891
   **********
   ****  ****
   ***    ***
   **      **
   *        *
*/


#include <stdio.h>
int main()
{
     for(int i =1;i<=5;i++ )
     {
          for(int j = 1;j<=5;j++)
          {
               if(j<=6-i)
                 printf("*");
               else
                 printf(" ");
          }
          for(int j = 6;j<=10;j++)
          {
               if(j>=5+i)
                 printf("*");
               else
                printf(" ");
          }
          printf("\n");
     }
     return 0;
}