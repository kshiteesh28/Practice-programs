//FIBONACCI SERIES IN ARRAYS
#include <stdio.h>
void main()
{
    int i,n;
    printf("enter the range for fibonocci series ");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    printf("the fibonocci series is ");
    for(i=2;i<=n+1;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    for(i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}
