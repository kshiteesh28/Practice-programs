#include<stdio.h>
void main()
{
	int m,n;
	printf("Enter the number of elements in array 1: ");
	scanf("%d",&m);
	int a[m];
	printf("\nEnter the number of elements in array 2: ");
	scanf("%d",&n);
	int b[n];
	int c[m+n];
	printf("\nEnter the elements of array 1: \n");

	for(int i=0;i<m;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}


	printf("\nEnter the elements of array 2: \n");

	for(int i=m;i<(m+n);i++)
	{
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
		c[i]=b[i];
	}
	printf("\nConcatenated array: ");
	for(int i=0;i<(m+n);i++)
	{
		printf("%d  ",c[i]);
	}
	printf("\n");
}
