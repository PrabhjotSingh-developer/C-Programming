// 8. Write a program to find next Prime number of a given number


#include<stdio.h>
int main()
{
    int n,flag = 1;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i = n+1;;i++)
    {
         for(int j = 2;j<=n;j++)
         {
             flag = 0;
             if(i%j == 0 && i!=j)
             {
                 flag = 1;
                 break;
             }

         }
         if(flag == 0)
          { printf("Next Prime number is %d after the number is %d",i,n);
              break;
          }

    }
    return 0;
}