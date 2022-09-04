#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }
}
/*
   5 5 5 5 5
     4 4 4 4
       3 3 3
         2 2
           1
             */
