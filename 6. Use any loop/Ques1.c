// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
     int n,sum=0;
     printf("Enter the number");
     scanf("%d",&n);
     for(int i =0;i<=n;i++)
         sum +=i;
      
     printf("Sum of %d natural number %d",n,sum);
     return 0;
}