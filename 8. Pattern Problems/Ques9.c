/*
8.
 1234321  
  12321
   121
    1
*/


#include <stdio.h>
int main()
{
     int a = 1;
     for(int i=1;i<=4;i++)
     {
          a = 1;
          for(int j=1;j<=7;j++)
          {
               if(j>=i && j<=8-i)
                {
                printf("%d",a);
                 (j>=4)?a--:a++;    
                }  
               else
                 printf(" ");

          }
          printf("\n");
     }
     return 0;
}