 #include<stdio.h>
void main()
{
    int i,j,k,n,l;
    printf("enter no. of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d\t",k);
        }

        for(l=(i-1);l>=1;l--)
        {
          printf("%d\t",l);
        }
        printf("\n\n");
    }
}

/*
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
                  */
