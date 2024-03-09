// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int lcm(int a,int b)
{
    int c = (a<b)?a:b;
    for(int i = c; i<=a*b;i++)
    {
        if(i%a ==0  && i%b==0)
           return i;
    }

}
int main()
{
    int a,b,l;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    l = lcm(a,b);
    printf("LCM of %d and %d is %d",a,b,l);
}