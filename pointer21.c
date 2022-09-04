//SELECTION SORT WITH POINTER
//sorting with pointer
#include <stdio.h>
void scan(int *p,int n);
void print(int *ptr,int);
void sort(int *k,int);
void main()
{
    int i,n;
    printf("enter number of elements of array: ");
    scanf("%d",&n);
    int a[n],*p=a;
    printf("enter the elements of the array: ");
    scan(a,n);

    printf("\nthe elements before sorting are: ");
    print(a,n);

    printf("\nthe elements after sorting are: ");
    sort(a,n);
}
void scan(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}
void print(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d,",*(ptr+i));
    }
}
void sort(int *k,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if( *(k+i) > *(k+i+j))
            {
                temp = *(k+i);
                *(k+i) = *(k+i+j);
                *(k+i+j) = temp;
            }
        }
    }
    print(k,n);
}

