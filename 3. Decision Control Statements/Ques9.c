// 9. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float sp,cp,tp,tl,per;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    tp = sp -cp;
    tl = sp - cp;
   
    if(sp>cp)
    {
        per = (tp*100)/cp;
         printf("total profit is %.2f per",per);
    }else
    {
         per = (tl*100)/cp;
         printf("total loss is %.2f per",per);
    }
}