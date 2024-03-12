// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
int squares(int n)
{
    if(n>0)
    {
        squares(n-1);
        printf("Square of %d is %d \n",n,n*n);
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    squares(n);
}