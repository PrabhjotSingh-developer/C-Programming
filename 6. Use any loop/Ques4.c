// 4. Write a program to calculate sum of squares of first N natural numbers



#include<stdio.h>
int main()
{
      int n;
     printf("Enter the number of Square of first N natural number");
     scanf("%d",&n);
     for(int i =1;i<=n;i++)
        printf("Square of %d is %d\n",i,i*i);


     return 0;
}