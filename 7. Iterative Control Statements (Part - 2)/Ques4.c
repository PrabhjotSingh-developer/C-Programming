
// 4. Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int a,b,h,hcf;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    h = (a>b)?a:b;   //24 36
 
    for(int i = 2;i<=h;i++)
    {
         if(a%i == 0 && b%i == 0)
         {
             hcf = i;
         } 
    }
    printf("HCF of two number is %d ",hcf);
    return 0;
}