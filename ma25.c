
#include<stdio.h>
void main()
{
	int m,n,o,p;
	printf("Enter the number of rows of matrix 1: ");
	scanf("%d",&m);
	printf("Enter the number of columns of matrix 1: ");
	scanf("%d",&n);
	printf("Enter the number of rows of matrix 2: ");
	scanf("%d",&o);
	printf("Enter the number of columns of matrix 2: ");
	scanf("%d",&p);
    if(n==o)
    {
        int a[m][n],b[o][p],c[m][p];

        printf("\nEnter the values of Matrix 1\n\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("a[%d][%d] : ",i,j);
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nEnter the values of Matrix 2\n\n");
        for(int i=0;i<o;i++)
        {
            for(int j=0;j<p;j++)
            {
                printf("b[%d][%d] : ",i,j);
                scanf("%d",&b[i][j]);
            }
        }

        printf("\nYour matrix 1 is: \n\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

        printf("\nYour matrix 2 is: \n\n");
        for(int i=0;i<o;i++)
        {
            for(int j=0;j<p;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }

        printf("\nProduct matrix is:\n\n");
        for(int i=0;i<m;i++) //rows in final matrix
        {
            for(int k=0;k<p;k++) //columns in final matrix
            {
                c[i][k]=0;
                for(int j=0;j<n;j++) //element addition for each position
                    {
                        c[i][k]+=(a[i][j]*b[j][k]);
                    }
                    printf("%d\t",c[i][k]);
            }
            printf("\n");
        }
    }
    else printf("\n\nCannot multiply because number of columns of matrix 1 is not equal to number of rows of matrix 2\n\n");
}
//Multiplication of two 2D matrices
