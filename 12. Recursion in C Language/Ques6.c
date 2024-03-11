// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
int naturalEvenNumber(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        naturalEvenNumber((n-2));
    }
    if(n==0)
      return 1;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    naturalEvenNumber(n*2);
}