//SUM OF ALL ARRAY ELEMENTS
#include <stdio.h>
void main()
{
    int i,j,n,sum=0;
    printf("enter number of array elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        sum+=a[i];
    }
    printf("\nthe sum of array elements are %d",sum);
}
