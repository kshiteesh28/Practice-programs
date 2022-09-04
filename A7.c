//LINEAR SEARCH
#include<stdio.h>
void main()
{
	int n,temp,search,count=0;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\nenter the elements: ");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nYou entered:");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	printf("\nEnter the element that you want to search: ");
	scanf("%d",&search);
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			count++;
			printf("%d is present at position %d\t\n",search,i+1);
		}
	}

	count==0?printf("\n%d is not present\nBye",search):printf("\nBye");
	printf("\n");
}
