// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
// result in below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area 
// & R with radius

#include <stdio.h>
int main()
{
    float r,area;
    
    printf("Enter the radius of circle \n");
    scanf("%f",&r);
    area = (22/7)*r*r;
    printf("Area of Circle is %f having the radius %f\n",area,r);

}