// 7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
     int n;
     printf("Enter the number how many odd number you want to print");
     scanf("%d",&n);
     for(int i =n*2 - 2;i>=0;i-=2)
        printf("%d\n",i);
     return 0;
}