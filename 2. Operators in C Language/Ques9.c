// 9. Write a program to make the last digit of a number stored in a variable as zero.
#include <stdio.h>
int main()
{
    int a ;
    printf("Enter the number");
    scanf("%d",&a);
    a = (a/10)*10;
    printf("The number after last digit zero %d",a);
}