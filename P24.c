#include<stdio.h>
void main()
{
    int i,j,k,n,s=1;
    printf("enter the no. of rows ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        for(j=i;j<n;j++)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
       {
           printf("%d\t",s);
           s++;
       }
        printf("\n\n");
    }
}
/*
               1
            3  2
         4  5  6
      7  8  9  10
   11 12 13 14 15
                  */
