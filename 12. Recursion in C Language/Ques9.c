// 9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
int OctalNum(int n)
{
    if(n>0)
    {
       OctalNum(n/8);
       printf("%d",n%8);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    OctalNum(n);
}