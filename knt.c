//To calculate the area of square, rectangle or circle
#include<stdio.h>

void main()
{
    int a;
    int l,b;
    printf("To calculate the area of:-\ncircle: press 1\nrectangle: press 2\nsquare: press 3\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Enter Radius of circle:\n");
        scanf("%d",&l);
        float area;
        area=3.14*l*l;
        printf("%g",area);
        break;
    case 2:
         printf("Enter Length and breadth of rectangle:\n");
        scanf("%d%d",&l,&b);
        printf("Area=%d",l*b);
        break;
    case 3:
         printf("Enter Side of square:\n");
        scanf("%d",&l);
        printf("Area=%d",l*l);
        break;
    }
}
