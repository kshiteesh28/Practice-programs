//FACTORIAL OF A NUMBER
#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;

    }
    printf("%d\n",factorial);
}
