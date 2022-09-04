#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter n ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",j);
        }
          printf("\n");
    }

}

/*
   4
   43
   432
   4321
        */
