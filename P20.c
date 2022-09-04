#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<(i+n);j++)
      {
        printf("%d ",j);

      }
      printf("\n");
    }

}
/*
  123
  234
  345
     */
