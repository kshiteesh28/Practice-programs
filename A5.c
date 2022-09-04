//BUBBLE SORT IN ASCENDING ORDER
#include<stdio.h>
void main()
{
  int n,i,j,temp;
  printf("enter no. of element for array ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("the original order is ");
   for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("\nthe elements in ascending order are ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
