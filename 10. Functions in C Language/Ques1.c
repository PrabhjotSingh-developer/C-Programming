// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float area(float);
int main()
{
    float r,a;
    printf("Enter the radius\n");
    scanf("%f",&r);
    a = area(r);
    printf("Area of circle is %.2f",a);
    return 0;
}
float area(float r)
{
     return ((r*r*22)/7);
}