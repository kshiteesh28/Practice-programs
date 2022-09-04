//TO SWAP NUMBERS WITHOUT TEMP
#include <stdio.h>
void main()
{
    int a,b,*p,*q;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a,q=&b;
    printf("a is %d and b is %d",a,b);
    *p+=*q;
    *q=*p-*q;
    *p-=*q;
    printf("\n\nafter swapping\n a is %d and b is %d",*p,*q);
}

