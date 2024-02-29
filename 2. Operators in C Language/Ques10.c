// 11. Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349)

#include <stdio.h>
int main()
{
    int a ;
    printf("Enter the number");
    scanf("%d",&a);
    a = (a*10)+9;
    printf("The number after adding 9 on last digit %d",a);
}
