#include<stdio.h>
void main()
{
    int i,j,k,l,n,space=0;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(k=1;k<space;k++)
        {
            printf("\t");
        }
        space+=2;
        for(l=i;l>=1;l--)
        {
            if(l==n)
            {
                continue;
            }
            else
            {
                printf("%d\t",l);
            }
        }
        printf("\n\n");
    }
}
/*
   123454321
   1234 4321
   123   321
   12     21
   1       1
             */
