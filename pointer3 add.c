//TO ADD 2 NUMBERS WITH POINTER
//METHOD 2
#include <stdio.h>
void main()
{
    int a,b;
    int *p1=&a,*p2=&b;
    printf("enter the two numbers to add: ");
    scanf("%d%d",p1,p2);
    printf("the sum is %d",*p1+*p2);
}
