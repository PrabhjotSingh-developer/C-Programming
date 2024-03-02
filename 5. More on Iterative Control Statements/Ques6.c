// 6. Write a program to print the first N even natural numbers


#include<stdio.h>
int main()
{
          int n;
     printf("Enter the number how many odd number you want to print");
     scanf("%d",&n);
     for(int i =0;i<n*2;i+=2)
        printf("%d\n",i);
     return 0;
}