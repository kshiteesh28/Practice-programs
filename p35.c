#include <stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=2*i+1;k++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}
/*    for(i=n-2;i>=0;i--)
    {
        for(j=n-1;j>i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=2*i+1;k++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}
/*
    *
  * * *
* * * * *
  * * *
    *
*/
