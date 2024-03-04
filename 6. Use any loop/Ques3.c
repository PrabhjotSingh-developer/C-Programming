//3. Write a program to calculate sum of first N odd natural numbers



#include<stdio.h>
int main()
{
      int n,sum = 0;
     printf("Enter the n ");
     scanf("%d",&n);
     for(int i =1;i<n*2;i+=2)
         sum += i;
      
      printf("Sum of %d odd number is %d",n,sum);
     return 0;
}