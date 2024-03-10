// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacciSeries(int n)
{
    int a = 0,b=1,c;
    if(n==1)
       printf("%d ",a);
    else if (n ==2)
       printf("%d %d ",a,b);
    else
    {
       printf(" %d %d ",a,b);
        for(int i =1;i<n-1;i++)
    {
         c = a+b;
         printf("%d ",c);
         a = b;
         b = c;
    }
    }
    
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    fibonacciSeries(n);
}
