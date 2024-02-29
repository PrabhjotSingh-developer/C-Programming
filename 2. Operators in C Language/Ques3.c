// 3. Write a program to swap values of two int variable
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    printf("a = %d, b = %d",a,b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter swaping values\n");
    printf("a = %d, b = %d",a,b);

}