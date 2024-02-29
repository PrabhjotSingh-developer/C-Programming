// 1. Write a program to print unit digit of a given number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    printf("Unit digit of number is %d",num%10);
}