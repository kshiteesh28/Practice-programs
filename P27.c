#include <stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the no. of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=(i-1);k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
/*
   1
   121
   12321
   1234321
           */
