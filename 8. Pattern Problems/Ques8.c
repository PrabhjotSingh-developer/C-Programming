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
    for(int i=1;i<=4;i++)
    {
        int k = 1,l;
           l = i;
        for(int j=1;j<=7;j++)
        {
           if(j>=5-i && j<=4)
           {
               printf("%d",k);
               k++;
           }
           else if(j>4 && j<=3+i )
           {
               
                printf("%d",--l);
           }
           else
             printf(" ");
        }
        printf("\n");
    }
     return 0;
}