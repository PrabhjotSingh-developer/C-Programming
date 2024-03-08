// 5. Write a function to print first N odd natural numbers. (TSRN

#include<stdio.h>
void oddNumber(int n)
{
     for(int i  = 1;i<n*2;i=i+2)
     {
         printf("%d ",i);
     }
}
int main()
{
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   oddNumber(n);

}