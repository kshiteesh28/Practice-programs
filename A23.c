//to find sum of each row of a matrix
#include <stdio.h>
void main()
{
    int i,j,r,c;
    printf("enter the number of rows and columns ");
    scanf("%d%d",&r,&c);
    int a[r][c],sum[r];
    printf("\nenter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe matrix is ");
    for(i=0;i<r;i++)
    {
        sum[i]=0;
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
            sum[i]+=a[i][j];
        }

    }
    for(i=0;i<r;i++)
   {
       printf("\nthe sum of row %d is %d\n",i+1,sum[i]);
   }
}
