// 8 . Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;

    if(a>=b && a>=c)
    {
        printf("A is greater\n");
    }
    else if(b>=a && b>=c)
     {
        printf("B is greater\n");
    }
    else{
        printf("C is greater\n");
    }
    return 0;
}