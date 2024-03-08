// 4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>

void printNatural(int n)
{
    for(int i=0;i<=n;i++)
      printf("%d ",i);
}
int main()
{
    int n;
    printf("Enter the number how many number you want to print");
    scanf("%d",&n);
    printNatural(n);

}