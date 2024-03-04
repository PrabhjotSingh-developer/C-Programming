// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main()
{
       int n;
     printf("Enter the number how many cube of numbers you want to print");
     scanf("%d",&n);
     for(int i = 1;i<=n;i++)
        printf("Cube of %d is %d\n",i,i*i*i);
     return 0;
}