/*
8.
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A  

*/
#include<stdio.h>
int main()
{
    char a = 'A';
    for(int i = 1;i<=5;i++)
    {
        a = 'A';
        for(int j = 1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                 printf("%c ",(j<5)?a++:a--);
            }
            else
              printf("  ");
        }
        printf("\n");
    }
}