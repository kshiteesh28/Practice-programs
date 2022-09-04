#include<stdio.h>
void main()
{
    int i,j,k=1,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
      {
        printf("%d ",k);
        k++;
      }
      printf("\n");
    }

}
/*
  1 2 3
  4 5 6
  7 8 9
        */
