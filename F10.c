//SUM OF ARRAY ELEMENTS BY PASSING TO FUNCTION
#include <stdio.h>
int add(int a[],int);
void main()
{
    int i,n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int b[n];
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("sum is %d",add(b,n));
}
int add(int a[],int l)
{
    int sum=0;
    for(int i=0;i<;i++)
    {
        sum+=a[i];
    }
    return sum;
}
