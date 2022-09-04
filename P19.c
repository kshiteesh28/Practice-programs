#include<stdio.h>
void main()
{
    int i,j,k=2,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
      {
        printf("%d ",k);
        k+=2;
      }
      printf("\n");
    }

}
/*
  2 4 6
  8 10 12
  14 16 18
           */

