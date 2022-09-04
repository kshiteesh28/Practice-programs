//RETURN MULTIPLE VALUES WITH FUNCTIONS
#include <stdio.h>
void fun(int *big,int *small,int a,int b);
void main()
{
    int a,b,g,s;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    fun(&g,&s,a,b);
    printf("the greater no. is %d and smaller number is %d",g,s);
}
void fun(int *big,int *small,int a,int b)
{
    a>b?(*big=a,*small=b):(*big=b,*small=a);
}
