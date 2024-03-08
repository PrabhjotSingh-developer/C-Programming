// 2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float simpleInterest(float , float,float);
int main()
{
    float p,r,t,i;
    printf("Enter Principle amount, rate of interest and time");
    scanf("%f%f%f",&p,&r,&t);
    i = simpleInterest(p,r,t);
    printf("Simple interest %.2f",i);
}
float simpleInterest(float p,float r, float t)
{
    float si = (p*r*t)/100;
    return si;
}