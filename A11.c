//TO SEPARATE ODD AND EVEN NUMBERS IN SEPARATE ARRAYS
#include<stdio.h>
void main()
{
	int n,j=0,k=0;
	printf("enter n: ");
	scanf("%d",&n);
	int a[n],odd[n],even[n];
	printf("enter elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("You entered : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			odd[j]=a[i];
			j++;
		}
		else if(a[i]%2==0)
		{
			even[k]=a[i];
			k++;
		}
	}

	printf("\nOdd numbers : ");
	for(int i=0;i<j;i++)
	{
			printf("%d ",odd[i]);
	}

	printf("\nEven numbers : ");

	for(int i=0;i<k;i++)
	{
			printf("%d ",even[i]);
	}
}
