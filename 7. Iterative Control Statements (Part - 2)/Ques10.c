// 10. Write a program to print all Armstrong numbers under 1000

#include <stdio.h>
#include <math.h>
int main()
{
    int n, num;
    double c = 0;
    double rem, sum = 0;
  
  for(int i = 1;i<=1000;i++)
  {
  
    c = 0;
    num = i;
    rem = 0;
    sum = 0;
     while (num > 0)
    {
        c++;
        num /= 10;
    }
    // printf("digit = %d",c);
    num = i;
    for (int j = 0; j < c; j++)
    {
        rem = num % 10;
        sum = sum + pow(rem, c);
        num /= 10;
    }

    if (i == sum)
        printf("%d ",i);
   
  }  
  
    return 0;
}