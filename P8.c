#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
          printf("\n");
    }

}
/*
  11111
  2222
  333
  44
  5
      */
