// 9. Write a function to check whether a given number contains a given digit or not.  (TSRS)
#include <stdio.h>
int checkDigit(int n,int gn)
{
    int rem;
    while(n>0)
    {
         rem = n%10;
         if(rem == gn)
             return 1;
         n /=10;
    }
    return 0;
}
int main()
{
    int n,gn,dn;
    printf("Enter the number");
    scanf("%d%d",&n,&gn);
    dn = checkDigit(n,gn);
    if(dn)
        printf("yes it contain the digit %d in %d",gn,n);
    else
       printf("No it does not contain a digit ");
}