// 11. Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char a;
    printf("enter any character");
    scanf("%c",&a);
    if(a>='a' && a<='z')
      printf("Character is in lower case");
    else 
      printf("Character in upper case");
}