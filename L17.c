//SUM OF THE DIGITS OF A NUMBER
#include <stdio.h>
void main()
{
    int num,a,b=0;
    printf("enter the number ");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        b+=a;
        num=num/10;
    }
    printf("sum of digits is %d",b);
}
