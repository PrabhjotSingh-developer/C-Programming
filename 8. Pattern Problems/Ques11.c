/*
8.
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A  

*/
#include<stdio.h>
int main()
{
   char a = 'A',t=1;
   for(int i=1;i<=5;i++)
   {
     a = 'A';
     t=1;
     for(int j=1;j<=9;j++)
     {
       if(j>=6-i && j<=5)
       { 
          
           printf(" %c ",a++); 
       }
       else if(j<=4+i && j>5)
       {
               if(t) {
                  t =0;
                  a--;
               }
            printf(" %c ",--a);
       }
       else
         printf("   ");
     }
     printf("\n");
   }
}