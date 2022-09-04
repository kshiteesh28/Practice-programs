//SUM AND AVERAGE OF ALL 2D ARRAY ELEMENTS
#include <stdio.h>
void main()
{
    int i,j,r,c,sum=0;
    float avg;
    printf("enter the no. of rows and columns of the matrix ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("\nenter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("a[%d][%d] ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe elements of matrix are ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            sum+=a[i][j];
           printf("\t%d ",a[i][j]);
        }
    }
    printf("\nthe sum of the elements is %d",sum);
    avg=(float)sum/(r*c);
    printf("\nthe average of the elements is %g ",avg);
}
