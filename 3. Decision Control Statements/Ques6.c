// 6. Write a program to print greater between two numbers. Print one number of both are the same
#include <stdio.h>
int main()
{
     int a,b;
     printf("Enter two numbers");
     scanf("%d %d",&a,&b);
     if(a>b)
       printf("A is greater");
     else 
       printf("B is greater");
}