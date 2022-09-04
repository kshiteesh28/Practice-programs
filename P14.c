#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
       {
           printf("\t%d",j);
       }
       printf("\n");
    }

}

/*
   1
   2 1
   3 2 1
         */
