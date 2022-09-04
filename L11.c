//TO COUNT NUMBER OF DIGITS IN A NUMBER
#include<stdio.h>
void main()
{
	int num,count=1;
	printf("enter number: ");
	scanf("%d",&num);
	for(int i=1;;i++)
	{
		num=num/10;
		if(num>=1)
		{
			count++;
		}
		else
		{
			printf("%d",count); break;
		}
	}

}
