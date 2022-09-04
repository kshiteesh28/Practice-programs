//TRACE OF A MATRIX
#include <stdio.h>
void main()
{
    int i,j,n,trace=0;
    printf("enter the order of the matrix ");
    scanf("%d",&n);
    int a[n][n];
    printf("\nenter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe elements of the matrix are ");
    for(i=0;i<n;i++)
    {
        printf("\n\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
            if(i==j)
            {
                trace+=a[i][j];
            }
        }
    }
    printf("\n\ntrace of matrix is %d",trace);
}
