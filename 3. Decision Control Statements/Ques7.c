// 7. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0 && !(year%100)==0)
    {
           printf("this is a leap year");
    }
    else
           printf("this is not a leap year");
      
}
