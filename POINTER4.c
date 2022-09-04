//TO SWAP 2 NUMBERS WITH POINTERS
#include <stdio.h>
void main()
{
    int temp,a,b,*p,*q;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a,q=&b;
    printf("a is %d and b is %d",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nafter swapping\n a is %d and b is %d",*p,*q);
}
