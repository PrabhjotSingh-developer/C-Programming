// 10. Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN).
#include <stdio.h>
void primeFac(int n)
{
    int c = 2;
    while(n>1)
    {
        while(n % c == 0 )
        {
             n = n/c;
             printf("%d ",c);
        }
        c++;
    }
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
     primeFac(36);
}