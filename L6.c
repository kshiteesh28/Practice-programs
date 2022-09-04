#include<stdio.h>
void fab(int n)
{
    int i,d1=1,d2=1,sum=0;
    for(i=0;i<n;i++)
    {
        sum=d2+d1;
        printf("%d  ",d1);
        d1=d2;
        d2=sum;
    }
}
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    fab(n);
}
