// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include<stdio.h>
int main()
{
 
    int n,a = 0,b = 1,c,flag = 1;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i=0;;i++)
    {
        c = a+b;
        if(c==n)
        {
             printf("Yes the number exist in fibonacci series");
             flag = 0;
             break;
        }
        else if(n<c)
            break;
        a = b;
        b = c;
    }
    if(flag )
       printf("Number not exist in fibonacci series"); 
    return 0;
}