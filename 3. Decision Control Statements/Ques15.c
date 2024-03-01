// 15. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character
#include<stdio.h>
int main()
{
    char a;
    printf("enter any character");
    scanf("%c",&a);
    if(a>='a' && a<='z')
      printf("Character is in lower case");
    else if(a>='A' && a<='Z')
      printf("Character in upper case");
    else if(a>='0' && a<='9')
      printf("It is number");
    else
      printf("It is a symbol");
}