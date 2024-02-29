// 5. Write a program to input a three-digit number and display the sum of the digits.

#include <stdio.h>
int main()
{
    int num,a,b,c;
    printf("Enter three digit number\n");
    scanf("%d",&num);
    a = num%10;
    
    b = (num/10)%10;
   
    c =  num%10;

    printf("sum of three digit number is %d",(a+b+c));
   

}