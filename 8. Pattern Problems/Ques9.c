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
     int k,l =1;
     for(int i = 1;i<=4;i++)
     {
           k = 1;
           l = 1;
           for(int j = 1;j<=7;j++)
           {
                if(j<=4 && j>=i)
                {
                     printf("%d",k++);
                }
                else if(j>4 && j<=8-i)
                {
                     if(l)
                     {
                        --k;
                        l = 0;
                     }
                     
                     printf("%d",--k);
                }
                else 
                 printf(" ");
           } 
           printf("\n");
     }
     return 0;
}