//TO DECLARE AND INITIALIZE POINTER
#include <stdio.h>
void main()
{
    int a,*p;
    printf("enter value of a: ");
    scanf("%d",&a);
    p=&a;
    printf("the value of a is %d",*p);
}
