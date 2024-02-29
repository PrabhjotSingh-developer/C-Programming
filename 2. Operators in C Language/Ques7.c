// 7. Write a program to check whether the given number is even or odd using a bitwise operator.
#include <stdio.h>
int main()
{
   int a,res;
   printf("Enter  number");
   scanf("%d",&a);
   res = a&1;
   if(res )
     printf("number is odd");
   else
     printf("number is even");

      
   

}