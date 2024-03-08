// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS
#include<stdio.h>
int combination(int n,int r){
 int fact_n = 1,fact_r =1 ,fact_nr = 1,comb ;
   for(int i = n;i>=1;i--)
   {
       fact_n *= i;
       if(i<=r)
          fact_r *= i;
       if(i<=n-r)
          fact_nr *= i;
   }
   comb = fact_n/(fact_r * fact_nr);
   return comb;
}
int main()
{
    int n,r,c;
    printf("Enter the value n and r");
    scanf("%d%d",&n,&r);
    c = combination(n,r);
    printf("The combinations  of n and r is %d",c);
}