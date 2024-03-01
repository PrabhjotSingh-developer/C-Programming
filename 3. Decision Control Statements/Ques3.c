// 3. Write a program to check whether a given number is an even number or an odd number.
#include <stdio.h>
int main()
{
    int a ;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%2 == 0)
    {
         printf("%d is even",a);
    }
    else
         printf("%d is odd",a);
}