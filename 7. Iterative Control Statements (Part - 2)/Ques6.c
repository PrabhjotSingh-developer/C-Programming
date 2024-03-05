
// 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int n = 100,flag;
    for(int i = 1;i<=n;i++)
    {
         for(int j = 2;j<=i;j++)
         {
        flag = 0;
             if(i%j == 0 && i!=j)
             {
                flag = 1;
                break;
             }

         }
         if(flag == 0)
           printf("%d ",i);
    }
    return 0;
}