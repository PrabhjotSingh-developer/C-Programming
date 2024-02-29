// 2. Write a program to print a given number without its last digit
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    printf("Number without its last digit %d",num/10);
}