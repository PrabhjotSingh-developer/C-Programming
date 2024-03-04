// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
     int n,c=0;
     printf("Enter the number");
     scanf("%d",&n);
     while(n>0)
     {
        c++;
        n = n/10;
     }
     printf("Number of digit is %d",c);
     return 0;
}