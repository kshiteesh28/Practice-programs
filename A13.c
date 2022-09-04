//ADDITION OF TWO 1D ARRAYS
#include <stdio.h>
void main()
{
    int i,n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    printf("\nenter the elements of first array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter the elements of second array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nfirst array elements:   ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nsecond array elements:  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
     printf("\nthe sum of both array   ");
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d ",sum[i]);
    }
}
