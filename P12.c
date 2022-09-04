#include<stdio.h>
void main()
{
    int i,j,n,k,l;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
             if(j==n)
            {
                for(k=1;k<n;k++)
                {
                    printf("\n");
                    for(l=n;l>k;l--)
                    {
                        printf("* ");
                    }

                }
            }
        }
        printf("\n");
    }
}
/*
   *
   * *
   * * *
   * *
   *
      */
