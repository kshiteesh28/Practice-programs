//SUM OF TWO MATRICES
#include <stdio.h>
void main()
{
    int i,j,r,c;
    printf("enter the no. of rows and columns of the matrix ");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],sum[r][c];
    printf("\nenter the elements of the first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("a[%d][%d] ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter the elements of the second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("b[%d][%d] ",i,j);
           scanf("%d",&b[i][j]);
        }
    }
    printf("\nthe elements of first matrix are ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
           printf("\t%d ",a[i][j]);
        }
    }
     printf("\nthe elements of second matrix are ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("\t%d ",b[i][j]);
        }
    }
    printf("\nthe sum of the matrices are ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
           printf("\t%d ",sum[i][j]);
        }
    }
}
