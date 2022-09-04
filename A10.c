//TO FIND LARGEST NUMBER BY SORTING
#include<stdio.h>
void main()
{
	int n,temp;
	printf("Enter the number of elements you want to store in the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: ");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Your array elements are: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Largest number is %d",a[n-1]);
}
