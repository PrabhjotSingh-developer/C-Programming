// 3. Write a recursive function to print first N odd natural numbers

#include <stdio.h>
int naturalOddNumber(int n)
{
    if(n>0)
    {
        naturalOddNumber((n-2));
        printf("%d ",n-1);
    }
    if(n==0)
      return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    naturalOddNumber(n*2);
}