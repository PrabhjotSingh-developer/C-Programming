// 1. Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int n,a =0,b = 1,c = a+b;
    printf("Enter the n");
    scanf("%d",&n);

    printf("%d %d %d ",a,b,c);
    for(int i = 0;i<n -3;i++)
    {
         a = b;
         b = c;
         c = a+b;
         printf("%d ",c);

    }
    
    return 0;
}