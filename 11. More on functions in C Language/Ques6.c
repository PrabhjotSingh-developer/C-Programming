// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void primeNumbers(int s,int e)
{
    int flag = 1;
    for(int i = s;i<=e;i++)
    {

        for(int j = 2;j<=i;j++)
        {
            flag = 0;
            if(i%j == 0 && i!=j)
            {
                flag  = 1;
                break;
            }
        }
        if(flag ==0)
           printf("%d ",i);
    }
}
int main()
{
    int a,b;
    printf("Enter the starting and ending range");
    scanf("%d%d",&a,&b);
    primeNumbers(a,b);
}