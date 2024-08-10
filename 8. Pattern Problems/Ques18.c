/*
         *
        ***
       *****
      *******
     *********
      *******
       *****
        ***
         *
*/
#include <stdio.h>
int main()
{
   for(int i = 1;i<=9;i++)
   {
     for(int j = 1;j<=9;j++)
     {
           if((j>=6-i && j<=4+i && i<5)||i==5 ||(i>5 && j>=i-4 && j<=9-i+5))
           {
                printf("*");
           }
           else
             printf(" ");
     }
     printf("\n");
   }
}