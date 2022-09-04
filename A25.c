//MATRIX MULTIPLICATION
#include <stdio.h>
void main()
{
    int i,j,m,n,p,q,k;
    printf("enter the number of rows and columns of A matrix ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("\nenter the elements of the matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the number of rows and columns of B matrix ");
    scanf("%d%d",&p,&q);


    do
        {
           printf("/no. of rows should be equal to no. of columns of matrix A\nenter no. of rows again ");
           scanf("%d",&p);
        }while(p!=n);
    int b[p][q],c[m][q];
    printf("\nenter the elements of the matrix B\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n matrix A is ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
        printf("\n matrix B is ");
    for(i=0;i<p;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("\t%d",b[i][j]);
        }
    }
    printf("\nmatrix C=AXB is ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
           c[i][j]=0;
          for(k=0;k<n;k++)
           {
             c[i][j]+=(a[i][k]*b[k][j]);
           }
           printf("%d\t",c[i][j]);
        }

    }
}
