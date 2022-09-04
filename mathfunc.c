//math functions
#include <stdio.h>
#include <math.h>
void main()
{
    float n;int b;
    printf("enter n ");
    scanf("%f",&n);
    b=ceil(n);
    printf("\n ceil %g is %d",n,b);
    b=floor(n);
    printf("\n floor %g is %d",n,b);
    n*=-1;
    b=abs((int)n);
    printf("\n abs %g is %d",n,b);
    int c=49;
    b=sqrt(c);
    printf("\n sqrt %d is %d",c,b);
    b=pow(3,4);
    printf("\n 3 power 4 is %d",b);
}
