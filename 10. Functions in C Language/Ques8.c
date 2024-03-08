// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)
#include<stdio.h>
int arrangement(int n,int r)
{
    int fact_n = 1,fact_nr = 1,arr;
    for(int i =n;i>=1;i--)
    {
        fact_n *=i;
        if(i<=n-r)
            fact_nr *= i;
    }
    arr = fact_n/fact_nr;
    return arr;
}
int main()
{
    int n,r,a;
    printf("Enter the n and r");
    scanf("%d%d",&n,&r);
    a = arrangement(n,r);
    printf("The number of arrangement is %d ",a);
}