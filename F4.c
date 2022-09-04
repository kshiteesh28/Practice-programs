//AREA OF CIRCLE WITH FUNCTIONS
#include <stdio.h>
float area(float a)
{
    float pi=3.14;
    return (pi*a*a);
}
void main()
{
    float r,a;
    printf("enter radius to find area of circle ");
    scanf("%f",&r);
    a=area(r);
    printf("area is %g",a);
}
