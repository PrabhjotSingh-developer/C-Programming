// 6. Write a program to calculate factorial of a number


#include<stdio.h>
int main()
{
          int n,fact = 1;
     printf("Enter the number");
     scanf("%d",&n);
     for(int i =n;i>=1;i--)
        fact *=i;

      printf("factorial of %d is %d\n",n,fact);
     return 0;
}