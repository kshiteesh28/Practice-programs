//ODD NUMBERS FROM M TO N WITH ENTRIES M,N
#include<stdio.h>
void main()
{
    int m,n;
    printf("enter the number ranges for odd numbers ");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }
}

