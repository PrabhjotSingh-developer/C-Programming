// 2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
int naturalNumber(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        naturalNumber(n-1);
    }
    if(n==0)
      return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    naturalNumber(n);
}