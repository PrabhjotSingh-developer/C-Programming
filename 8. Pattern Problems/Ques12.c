/*
8.
A B C D E D C B A  
  A B C D C B A
    A B C B A
      A B A
        A

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
            if(j>=i && j<=10-i)
            {
                 printf("%c ",(j<5)?a++:a--);
            }
            else
              printf("  ");
        }
        printf("\n");
    }
}