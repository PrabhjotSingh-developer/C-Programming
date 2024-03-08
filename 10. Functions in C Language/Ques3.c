// 3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int checkNum(int);

int main()
{
    int n,a;
    printf("Enter the no");
    scanf("%d",&n);
    a = checkNum(n);
    if(a)
       printf("Number is even");
    else
        printf("Number is odd");
    return 0;
}
int checkNum(int num)
{
     return (num%2)?0:1;
}