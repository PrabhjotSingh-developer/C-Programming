// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void firstnPrime(int n)
{
    int flag = 1,count = 0;
    for(int i = 2;;i++)
    {
        for(int j =  2;j<=n;j++)
        { flag = 0;
          if(i%j==0 && i!=j)
           {
             flag = 1;
             break;
           }
        }
        if(flag ==0)
        {
           printf("%d ",i);
           count++;
           if(count >=n)
              break;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    firstnPrime(n);
}