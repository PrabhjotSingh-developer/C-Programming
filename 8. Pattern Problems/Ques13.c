/*
     A B C D E F G F E D C B A
     A B C D E F   F E D C B A
     A B C D E       E D C B A
     A B C D           D C B A
     A B C               C B A
     A B                   B A
     A                       A
*/
#include<stdio.h>
int main()
{
    int k = 'A';
    for(int i=1;i<=7;i++)
    {
        k='A';
        for(int j=1;j<=13;j++)
        {

            if(j<=8-i || j>=6+i)
            {
               printf(" %c ",(j<=7)?k++:--k);
            }
            else
              printf("   ");
        }
        printf("\n");
    }
}