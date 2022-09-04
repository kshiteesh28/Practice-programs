//TO VERIFY IF PERFECT NUMBER OR NOT
#include<stdio.h>
void main()
{
    int i,a=0,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
         a=a+i;
    }
    (n==a)?printf("perfect number"):printf("not a perfect number");
}
