// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int nextPrime(int n)
{
    // n = 2 
    int flag = 1;
    for(int i =n+1;;i++)
    {
        for(int j = 2;j<=n;j++)
        {
             flag = 0;
            if(i%j == 0 && i!=j)
            {
                flag  = 1;
                 break;
            }
        }
        if(flag == 0)
           return i;
    }

}
int main()
{
   int n,next;
   printf("Enter the number");
   scanf("%d",&n);
   next = nextPrime(n);
   printf("Next Prime number is %d",next);
}