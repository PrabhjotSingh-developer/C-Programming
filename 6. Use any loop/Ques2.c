// 2. Write a program to calculate sum of first N even natural numbers.

#include<stdio.h>
int main()
{
      int n,sum=0;
     printf("Enter the n ");
     scanf("%d",&n);
     for(int i =0;i<=n;i++)
         sum += i;
      printf("Sum of %d even natural number %d",n,sum);
     return 0;
}