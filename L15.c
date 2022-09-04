//SUM OF FIRST AND LAST DIGIT OF A NUMBER
#include <stdio.h>
void main()
{
    int num,first,a,sum;
    printf("enter the number ");
    scanf("%d",&num);

    a=num%10;
    while(num>0)
    {
        first=num%10;
        num=num/10;
    }
    sum=first+a;
    printf("the first and last digit sum is %d",sum);
}
