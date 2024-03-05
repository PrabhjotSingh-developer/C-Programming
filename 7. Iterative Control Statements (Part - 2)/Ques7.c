// 7. Write a program to print all Prime numbers between two given numbers


#include<stdio.h>
int main()
{
    int a,b,flag =1;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    for(int i = a;i<=b;i++)
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