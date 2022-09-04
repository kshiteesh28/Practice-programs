#include<stdio.h>
void main()
{
    int i,j,n,k,num=1;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d\t\t",num);
            num++;
        }
        printf("\n\n");
    }
}
/*
     1
    2 3
   4 5 6
         */
