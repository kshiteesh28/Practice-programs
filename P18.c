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
        k+=2;
      }
      printf("\n");
    }

}
/*
  1 3 5 7
  9 11 13 15
  17 19 21 23
  25 27 29 31
              */
