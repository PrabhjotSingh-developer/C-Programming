/* 2.  1 2 3 4 *
             * *
           * * *
         * * * *
       * * * * * 
*/ 

#include <stdio.h>
int main()
{
    for(int i = 1;i<=5;i++)
    {
         for(int j = 1;j<=5;j++)
         {
            if(j>5-i)
              printf(" *");
            else 
              printf("  ");
         }
         printf("\n");
    }
     return 0;
}