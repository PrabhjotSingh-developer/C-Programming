// 8. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int n;
    printf("Enter the  number");
    scanf("%d",&n);
    printf("Square of %d is %d",n,square(n));
}