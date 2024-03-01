// 1. Write a program to check whether a given number is positive or non-positive
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a>0)
       printf("Number is positive");
    else if(a==0)
       printf("Number is zero");
    else
      printf("Number is negative");
}