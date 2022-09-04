//FIBONACCI SERIES
#include <stdio.h>
void main()
{
    int i,j,n,a=0,b=1,temp=1;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\t%d",temp);
            temp=a+b;
            a=b;
            b=temp;
        }
        printf("\n");
    }
}
