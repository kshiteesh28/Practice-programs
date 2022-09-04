//TO FIND SECOND LARGEST NUMBER IN ARRAY
#include<stdio.h>
void main()
{
  int n,l1,l2;
  printf("enter the number of elements: ");
  scanf("%d",&n);
  int a[n];

  printf("Enter your elements: ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("You entered: ");
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  l1=a[0];l2=0;

  for(int i=0;i<n;i++)
  {
    if(a[i]>l1)
    {
      l1=a[i];
    }
  }
  for(int i=0;i<n;i++)
  {
    if((a[i]>l2)&&(a[i]<l1))
    {
      l2=a[i];
    }
  }
  printf("second largest number is %d",l2);
}
