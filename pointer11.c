//2D array
#include <stdio.h>
void main()
{
    int m,n,*p;
    printf("enter number of rows and coluumns: ");
    scanf("%d%d",&m,&n);
    int a[m][n];p=a;
    printf("enter the array elements: ");
    for(p=&a[0][0];p<=&a[m-1][n-1];p++)
    {
        scanf("%d",p);
    }
    printf("the array elements are: ");
   for(p=a;p<=&a[m-1][n-1];p++)
   {
       printf("%d ",*p);
   }
}
