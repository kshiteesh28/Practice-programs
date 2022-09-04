//2D ARRAY IN MATRIX FORM
#include <stdio.h>
void main()
{
    int i,j,r,c;
    printf("enter the no. of rows and columns of the matrix ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("\nenter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("a[%d][%d] ",i,j);
           scanf("\t%d",&a[i][j]);
        }
    }
    printf("\nthe elements of matrix are ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
           printf("\t%d ",a[i][j]);
        }
    }
}
