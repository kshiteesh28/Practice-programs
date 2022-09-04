// TO PRINT ARRAY ELEMENTS IN REVERSE ORDER
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter no. of elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements ");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("\nthe elements are ");
    for(int i=(n-1);i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}


