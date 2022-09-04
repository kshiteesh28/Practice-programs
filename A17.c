//20 Fabonacci Series
#include<stdio.h>
void main()
{
    int n,a1;
    printf("Enter the num of elements:");
    scanf("%d",&n);
    int fab[n];
    fab[0]=1;
    fab[1]=1;
    for(a1=2;a1<n;a1++)
    {
       fab[a1]=fab[a1-2]+fab[a1-1];
    }
    for(a1=0;a1<n;a1++)
    {
       printf("%d\n",fab[a1]);
    }

}
