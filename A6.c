//SELECTION SORT IN ASCENDING ORDER
#include <stdio.h>
void main()
{
  int i,j,n,temp;
  printf("enter the no. of array elements ");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("the elements are ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }

  }
