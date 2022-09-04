//FIBONACCI SERIES
#include <stdio.h>
int fibo(int);
void main()
{
    int i,n;
    printf("enter the limit n for the series: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",fibo(i));
    }
}
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return(fibo(n-1)+fibo(n-2));
    }
}
