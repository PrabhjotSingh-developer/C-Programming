// 2. Write a program to print the first N natural numbers.

#include <stdio.h>
int main()
{
   int n;
   printf("Enter the n ");
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
      printf("%d\n", i);
   return 0;
}