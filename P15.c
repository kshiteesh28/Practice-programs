#include<stdio.h>
void main()
{
    int i,j,k=1,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i <=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;

        }
        printf("\n");
    }
}
/*
   1
   23
   456
   78910
        */
