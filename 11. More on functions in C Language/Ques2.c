// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int hcf(int a,int b)
{
    int c = (a<b)?b:a,hcf;
    for(int i = 2; i<=c;i++)
    {
        if(a%i ==0  && b%i==0)
           hcf = i;
    }
return hcf;
}
int main()
{
    int a,b,l;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    l = hcf(a,b);
    printf("HCF of %d and %d is %d",a,b,l);
}