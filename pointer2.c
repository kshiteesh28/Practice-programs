//TO ADD 2 NUMBERS WITH POINTER
//METHOD 1
#include <stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers to add: ");
    scanf("%d%d",&a,&b);
    int *p1=&a,*p2=&b;
    printf("the sum is %d",*p1+*p2);
}
