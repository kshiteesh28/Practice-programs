//TO COPY ONE ARRAY INTO ANOTHER
#include <stdio.h>
void array(int *a,int n);
void main()
{
    int i,n,*ptr1,*ptr2;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int a[n],b[n];
    ptr1=a,ptr2=b;
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr1[i]);
        *(ptr2+i) = *(ptr1+i);
    }
    printf("\nthe original array is: ");
    array(a,n);
    printf("\nThe copied array is: ");
    array(b,n);
}
void array(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
