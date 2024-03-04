// 8. Write a program to check whether a given number is a Prime number or not


#include<stdio.h>
int main()
{
     int n,flag=0;
     printf("Enter the n ");
     scanf("%d",&n);
   // 1,2,3,5,7,9
   // 
     for(int i = 2;i<=n;i++)
     {
        if(n%i==0 && n!=i )
        {
                  
          flag = 1;
          break;
        }
     }
     if(flag == 0 && n>1)
        printf("%d is  prime number",n);
     else
        printf("%d is not prime number",n);

     return 0;
}