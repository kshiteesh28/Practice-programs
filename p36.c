
#include <stdio.h>
void main()
{
    int i,j,k,s,r,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i;
        printf("\n");
        for(j=n;j>i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d\t",s++);
        }
        for(r=s-2;r>=i;r--)
        {
            if(i==1)
            {
                continue;
            }
            printf("%d\t",r);
        }
        printf("\n");
    }
}
/*
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4
*/
