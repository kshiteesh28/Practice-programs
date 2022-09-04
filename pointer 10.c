//TO REVRSE AN ARRAY WITH POINTER
#include <stdio.h>
void arrprint(int *c,int);
void main()
{
    int n,*p1,*p2;
    printf("enter the no. of elements for array: ");
    scanf("%d",&n);
    int a[n],b[n];
    p1=a;p2=b;
    printf("\nenter elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p1+i));
        *(p2+i) = *(p1+i);
    }
    printf("\nbefore reversing ");
    arrprint(p1,n);
    for(int i=0;i<n;i++)
    {
        *(p1+i) = *(p2+n-i-1);
    }
    printf("\n\nafter reversing ");
    arrprint(p1,n);
}
void arrprint(int *c,int l)
{
    printf("the elements of array are: ");
    for(int i=0;i<l;i++)
    {
        printf("%d ",*(c+i));
    }
}
