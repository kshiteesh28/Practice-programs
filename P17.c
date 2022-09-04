#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    k=n*n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
      {
        printf("%d ",k);
        k--;
      }
      printf("\n");
    }

}
/*
  16  15  14  13
  12  11  10  9
  8   7   6   5
  4   3   2   1
                 */

