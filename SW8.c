//GREATEST OF TWO NUMBERS
#include <stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers ");
    scanf("%d %d",&a,&b);
    switch(a>b)
    {
        case 1:printf("%d is greater than %d",a,b);break;
        case 0:printf("%d is greater than %d",b,a);break;
    }
}
