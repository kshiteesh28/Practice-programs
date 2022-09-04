//TO FIND FACTORIAL
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("%d factorial is %d",n,fact(n));
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
