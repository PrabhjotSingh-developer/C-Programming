// 13. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    if(a%3 == 0 && a%7 == 0)
      printf("number is divisible by both 3 and 7");
    else 
            printf("number is not divisible by both 3 and 7");

}