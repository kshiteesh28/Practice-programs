//FIBONACCI WITH FUNCTIONS
#include <stdio.h>
int fibo(int);
void main()
{
    int n;
    printf("enter n numbers you want in the series: ");
    scanf("%d",&n);
    fibo(n);
}
int fibo(int n)
{
    int a=0,sum=0,b=1;
    for(int i=1;i<=n;i++)
    {
        printf("\t%d",sum);
        sum+=b;
        b=a;
        a=sum;
    }
    return 0;
}
