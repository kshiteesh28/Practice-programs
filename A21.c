// divide one array into two arrays
#include <stdio.h>
void main()
{
  int i,j,n,c,d;
  printf("enter number of elements ");
  scanf("%d",&n);
  c=n/2;
  d=n-c;
  int a[n],a1[c],a2[d];
  printf("enter the array elements ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nthe elements are ");
   for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\nthe first half array is ");
  for(i=0;i<c;i++)
  {
    a1[i]=a[i];
    printf("%d ",a1[i]);
  }
  printf("\nthe second half array is ");
  for(i=c;i<n;i++)
  {
    a2[i]=a[i];
    printf("%d ",a2[i]);
  }
}
