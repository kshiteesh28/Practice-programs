//concatenation of array
#include <stdio.h>
void main()
{
    int i,j,n,m;
    printf("enter number of elements for 1st array ");
    scanf("%d",&n);
    printf("\nenter the number of elements of 2nd array ");
    scanf("%d",&m);
    int a[n],b[m],c[m+n];
    printf("\nenter the elements of 1st array \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] ",i);
        scanf("%d",&a[i]);
           c[i]=a[i];
    }
    printf("\nenter the elements of 2nd array \n");
    for(i=n;i<m+n;i++)
    {
        printf("b[%d] ",i);
        scanf("%d",&b[i]);
        c[i]=b[i];
    }
    printf("\nthe elements of 1st array are ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);

    }
    printf("\nthe elements of 2nd array are ");
    for(i=n;i<n+m;i++)
    {
        printf(" %d",b[i]);

    }
    printf("\nthe concatenated array is ");
    for(i=0;i<m+n;i++)
    {
        printf(" %d",c[i]);
    }
}
