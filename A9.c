//MINIMUM NUMBER
#include<stdio.h>
void main()
{
	int n,min,loc=1;
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
	min=a[0];

	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			loc=i+1;
		}
	}
	printf("Smallest number is %d at the location %d",min,loc);
}

