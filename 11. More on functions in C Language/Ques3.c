// 3. Write a function to check whether a given number is Prime or not. (TSRS)


#include <stdio.h>
int primeChecker(int n)
{
    for(int i=2;i<n;i++)
        if(n%i  == 0)
            return 0;
   if(n == 1)
      return  0;
    return 1;
}
int main()
{
    int n,res;
    printf("Enter the number");
    scanf("%d",&n);
    res = primeChecker(n);
    if(res)
       printf("%d is Prime number",n);
    else
       printf("%d is not Prime number",n);
      
}