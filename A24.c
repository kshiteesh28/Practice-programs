//TO READ A SQUARE MATRIX AND PRINT DIAGONAL ELEMENTS
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter the order of the matrix ");
    scanf("%d",&n);
    int a[n][n],b[n];
    printf("\nenter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe matrix is ");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
           if(i==j)
           {
               b[i]=a[i][j];
           }
        }
    }
    printf("\nthe diagonal elements are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}
