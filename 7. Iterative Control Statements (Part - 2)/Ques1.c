// 1. Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int n,a =0,b = 1,c = a+b;
    printf("Enter the n");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
         c = a+b;
         if(i == n)
            printf("Nth term = %d",c);
         a = b;
         b = c;

    }
    
    return 0;
}