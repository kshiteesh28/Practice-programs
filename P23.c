#include <stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the no. of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
           printf("\t");
        }
        for(k=i;k<=n;k++)
        {
             printf("%d\t",k);
        }
        printf("\n");
    }
}
/*
   1 2 3 4 5
     2 3 4 5
       3 4 5
         4 5
           5
             */
