#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter no. of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
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
       1
      22
     333
    4444
   55555
         */
