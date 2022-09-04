//SUM OF ALL ODD NUMBERS BETWEEN 1 TO N
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("sum of n odd no.s is %d",sum);
}
