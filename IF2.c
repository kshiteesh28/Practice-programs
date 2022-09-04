#include<stdio.h>
void main()
{
	int age,immunity;
	printf("COVID-19!!!SHOULD YOU GO OUT?\nLets check it...\nenter your age ");

	scanf("%d",&age);

	if(age>65)
	{
		printf("STAY AT HOME\n");
	}
	else
	{
		printf("Do you have a good immune system?\nIf yes, press 1\nIf no, press 0\n");

		scanf("%d",&immunity);

		if(immunity==0)
		{
			printf("STAY AT HOME\n");
		}
		else
		{
			printf("Don't be stupid you can still transmit. STAY AT HOME\n");
		}
	}
}
