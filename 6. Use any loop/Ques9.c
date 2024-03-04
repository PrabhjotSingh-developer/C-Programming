// 9. Write a program to calculate LCM of two numbers


#include<stdio.h>
int main()
{
       int a,b,c;
     printf("Enter the two numbers ");
     scanf("%d %d",&a,&b);
     c = (a>b)?b : a;  //8 12

     for(int i =c;i<=a*b;i++)
     {
        if(i%a==0 && i%b ==0)
        {
          printf("LCM is %d",i);
          break;
        }
     }
     return 0;
}