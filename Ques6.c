// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int factorial(int n)
{
    int f = 1;
    if(n==0)
      return 1;
    else
       for(int i = 1;i<=n;i++)
          f *= i;
    return f;     
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("factorial of a %d is %d",n,factorial(n));
}