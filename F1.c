//ADDITION OF TWO NUMBERS WITH FUNCTIONS
#include <stdio.h>
int add(int,int);
void main()
{
    int a,b;
    printf("enter the two numbers you want to add: ");
    scanf("%d%d",&a,&b);
    add(a,b);
}
int add(int a,int b)
{
    printf("the sum is %d",a+b);
    return 0;
}

