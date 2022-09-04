// 1+1/2+1/3+.....+1/N
#include <stdio.h>
void main()
{
    int n;
    double i,sum=0,a;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=(1/i);
        sum+=a;
    }
    printf("the sum of serie is %lf",sum);
}
