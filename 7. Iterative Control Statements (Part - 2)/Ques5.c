// 5. Write a program to check whether two given numbers are co-prime
// numbers or not


#include<stdio.h>
int main()
{
      int a,b,h,hcf;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    h = (a>b)?a:b;   //24 36
     for(int i = 1;i<=h;i++)
    {
         if(a%i == 0 && b%i == 0)
         {
             hcf = i;
         } 
    }
    if(hcf == 1)
       printf("It is co prime number");
    else 
      printf("It is not co prime number");
    return 0;
}