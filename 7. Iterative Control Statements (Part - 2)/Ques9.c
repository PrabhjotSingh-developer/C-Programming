// 9. Write a program to check whether a given number is an Armstrong number or not

#include <stdio.h>
#include <math.h>
int main()
{
    int n, num;
    double c = 0;
    printf("Enter the number");
    scanf("%d", &n);
    num = n;
    while (num > 0)
    {
        c++;
        num /= 10;
    }
    num = n;
    double rem, sum = 0;
    for (int i = 0; i < c; i++)
    {
        rem = num % 10;
        sum = sum + pow(rem, c);
        num /= 10;
    }

    if (n == sum)
        printf("Number is armstrong");
    else
        printf("Number is not armstrong");
    return 0;
}