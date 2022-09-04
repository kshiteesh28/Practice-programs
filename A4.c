//TO COPY ELEMENTS OF ONE ARRAY INTO ANOTHER
#include <stdio.h>
void main()
{
    int i,j,n,sum=0;
    printf("enter number of array elements ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        b[i]=a[i];
    }
    printf("\nthe elements of b are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);

    }
}

