// 8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>
int binary(int n)
{
    if(n>0)
    {
       binary(n/2);
       printf("%d",n%2);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    binary(n);
}