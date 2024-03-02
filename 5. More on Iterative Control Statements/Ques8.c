// 8. Write a program to print squares of the first N natural numbers


#include<stdio.h>
int main()
{
     int n;
     printf("Enter the n ");
     scanf("%d",&n);
     for(int i =1;i<=n;i++)
        printf("Square of %d is %d\n",i,i*i);
     return 0;
}