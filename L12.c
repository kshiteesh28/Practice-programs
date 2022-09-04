//REVERSE OF A NUMBER
#include <stdio.h>
void main()
{
    int i,num,rem,rev=0;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=0;i=num;i++)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("the reverse of number is %d",rev);
}
