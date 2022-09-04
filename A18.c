//DIAGONAL MATRIX OF ORDER N
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter the order of the matrix ");
    scanf("%d",&n);
    printf("\nthe elements of the matrix are ");
    for(i=0;i<n;i++)
    {
        printf("\n\n");
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               printf("\t1");
            }
            else
            {
               printf("\t0");
            }
        }
    }
}
