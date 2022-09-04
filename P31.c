#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(i=65;i<=(n+65);i++)
    {
        for(j=65;j<i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
/*
  A
  AB
  ABC
  ABCD
       */
