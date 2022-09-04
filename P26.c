#include<stdio.h>
void main()
{
    int i,j,n,sum;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
            sum+=j;
        }

        printf("\t%d\n\n",sum);
    }
}

/*
  1      1
  1 2     3
  1 2 3    6
  1 2 3 4   10
               */
