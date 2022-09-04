//TO CALCULATE AREA OF SQUARE,RECTANGLE OR CIRCLE
#include <stdio.h>
void main()
{
  int s,l,b,r,shape;
  float area;
  float pi = 3.14;
  printf("enter the figure to calculate are/n1 for square/n2 for rectangle/n3 for circle");
  scanf("%d",&shape);
  switch (shape)
  {
    case 1:
      printf("enter the side of the square ");
      scanf("%d",&s);
      area=s*s;
      break;
    case 2:
      printf("enter length and breadth of rectangle ");
      scanf("%d%d",&l,&b);
      area=l*b;
      break;
     case 3:
       printf("enter radius of circle");
       scanf("%d",&r);
       area=pi*r*r;
       break;
      default:printf("enter numbers 1-3 only");
  }
  printf("area is %g",area);
}
