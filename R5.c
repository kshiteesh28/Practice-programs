//SUM OF ALL DIGITS OF A NUMBER
#include <stdio.h>
int sum(int);
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("the sum of digits is %d",sum(n));
}
int sum(int a)
{
    if(a<10)  //or if(a==0)
    {
        return a;
    }
    else
    {
        return (a%10)+sum(a/10);
    }
}
