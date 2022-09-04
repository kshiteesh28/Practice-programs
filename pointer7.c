//TO PRINT ARRAY ELEMENTS WITH POINTERS
#include <stdio.h>
void main()
{
    int n,*p;
    printf("enter number of elements n: ");
    scanf("%d",&n);
    int a[n];
    p=a;
    printf("enter %d array elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=a;
    printf("they are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
