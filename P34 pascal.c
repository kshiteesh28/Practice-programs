#include<stdio.h>
void main()
{
    int i,j,k,n,num,den,d;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>(i+1);j--)
        {
            printf("\t");
        }
        printf("1\t");
        num=1;
        den=1;
        d=1;
        for(k=i;k>=1;k--)
        {
            num*=k;
            den*=d;
            d++;
            printf("\t%d\t",(num/den));
        }
        printf("\n\n");
    }
}

/*
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
             */
