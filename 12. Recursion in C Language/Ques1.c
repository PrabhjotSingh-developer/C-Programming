// 1. Write a recursive function to print first N natural numbers

#include <stdio.h>
int naturalNumber(int n)
{
    if(n>0)
    {
        naturalNumber(n-1);
        printf("%d ",n);
    }
    if(n==0)
      return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    naturalNumber(n);
}