//,ULTIPLICATION TABLE OF N UPTO 12
#include <stdio.h>
void main()
{
    int i,n,product;
    printf("enter the table you want to print ");
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        product=i*n;
        printf("%d*%d=%d\n",n,i,product);
    }
}
