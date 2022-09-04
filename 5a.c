#include <stdio.h>
void main()
{
    int i,j,n,count=0;
    printf("enter number of array elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<n;j++)
        {

            if(a[i]==a[j])
            {
                count++;break;
            }
        }
    }
    printf("the array elements are ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
  printf("\nduplicate elements are %d",count);
}
